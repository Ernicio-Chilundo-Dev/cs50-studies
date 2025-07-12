#include <cs50.h>
#include <stdio.h>

#define NUM 3

typedef struct
{
    string name;
    int votes;
} candidate;

int main(void)
{
    candidate candidates[NUM];

    for (int i = 0; i < NUM; i++)
    {
        printf("======================== %i =========================\n", i + 1);
        candidates[i].name = get_string("Name: ");
        candidates[i].votes = get_int("Number: ");
    }

    int highest_vote = 0;

    for (int i =  0; i < NUM; i++)
    {
        if (candidates[i].votes > highest_vote)
        {
            highest_vote = candidates[i].votes;
        }
        
    }

    for (int i = 0; i < NUM; i++)
    {
        if (candidates[i].votes == highest_vote)
        {
            printf("%s\n", candidates[i].name);
        }
    }

}