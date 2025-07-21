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
int candidates_count;

// Function prototype
bool vote(string name);
void print_winners(void);

// Function main
int  main(int argc, string argv[])
{
    
}