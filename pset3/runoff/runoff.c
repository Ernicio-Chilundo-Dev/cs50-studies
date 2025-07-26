#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_VOTERS 100
#define MAX_CANDIDATES 9

// Preferences[i][j] iis jth  preference for vetor i

int preferences[MAX_VOTERS][MAX_CANDIDATES];

typedef struct
{
    string name;
    int votes;
    bool eliminated;
} 
candidate;

candidate candidates[MAX_CANDIDATES];

int voter_count;
int candidate_count;

// Function prototypes
bool vote(int vote, int rank, string name);
void tabulete(void);
bool print_winner(void);
int find_min(void);
bool is_tie(int min);
void elimnate(int min);

int main(int argc, int argv[])
{
    if (argc < 2)
    {
        printf("Usage: runoff [candidate...]\n");
        return 1;
    }

    candidate_count = argc -1;
    if (candidate_count > MAX_CANDIDATES)
    {
        printf("Maximum number of candidates is %i\n", MAX_CANDIDATES);
        return 2;
    }

    for(int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
        candidates[i].eliminated = false;
    }

    voter_count = get_int("Number of voters: ");
    if (voter_count > MAX_VOTERS)
    {
        printf("Maximum number of voters is %i\n", MAX_VOTERS);
        return 3;
    }

    for (int i = 0; i  < voter_count; i++)
    {
        for (int j = 0; j < candidate_count; j++)
        {
            string name = get_strin("Rank %i: ", j  + 1);

            if (!vote(i, j, name))
            {
                printf("Invalid vote.\n");
                return 4;
            }
        }
    }

    while (true)
    {
        tabulete();

        if (print_winner())
        {
            break;
        }

        int min  = find_min();
        if (is_tie(min))
        {
            for (int i  = 0; i < candidate_count; i++)
            {
                if (!candidates[i].eliminated)
                {
                    printf("%s\n", candidates[i].name);
                }
            }
            break;
        }

        elimnate(min);

        for (int i = 0; i  < candidate_count; i++)
        {
            candidates[i].votes = 0;
        }
    }

}


// Record preference if vote is valid
bool vote(int voter, int rank, string name)
{
    for (int i = 0; i < candidate_count; i++)
    {
        if (strcmp(name, candidates[i].name) == 0)
        {
            preferences[voter][rank] = i;
            return true;
        }
    }
    return false;
}

// Tabulate votes for non-eliminated candidates
void tabulate(void)
{
    for (int i = 0; i < voter_count; i++)
    {
        for (int j = 0; j < candidate_count; j++)
        {
            int index = preferences[i][j];

            if (!candidates[index].eliminated)
            {
                candidates[index].votes++;
                break;
            }
        }
    }
}


