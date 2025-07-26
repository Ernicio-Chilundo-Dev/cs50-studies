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




