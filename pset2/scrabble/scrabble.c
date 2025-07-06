#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

// Values of letters A - z
int POINTS[] = {
    1,3,3,2,1,4,2,4,
    1,8,5,1,3,1,1,3,
    10,1,1,1,1,4,4,8,
    4,10
};

// Prototype
int computer_score(string word);

int main(void)
{
    // Entrance of the players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Compute the scores
    int score1 = computer_score(word1);
    int score2 = computer_score(word2);

    // Decide the winner
    if (score1 > score2)
    {
        printf("Player 1 won!\n");
    } 
    else if (score1 < score2)
    {
        printf("Player 2 won!\n");
    }
    else{
        printf("Draw!\n");
    }


}


