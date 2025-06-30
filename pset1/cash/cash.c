#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user input
    int change;

    do 
    {
        change = get_int("Change owed: ");
    }
    while (change <= -1);
}

//