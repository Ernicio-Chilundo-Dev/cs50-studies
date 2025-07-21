#include <cs50.h>
#include <stdio.h>
#include <string.h>

#define MAX 9 

// Candidates have a name and a vote count

typedef struct 
{
    string name;
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidades
int candidate_count;

// Function prototype
bool vote(string name);
void print_winner(void);

// Function main
int  main(int argc, string argv[])
{
    // Check for at least on candidate
    if (argc < 2)
    {
        printf("Usage: ./plurality [candidate...]\n");
        return 1;
    }

    // Populate candidate array
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maxmum number of candidate is %i\n", MAX);
        return 2;
    }
    
}