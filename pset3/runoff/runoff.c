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




