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

    // Print a change owed

    int counter = 0;

    while (change >= 25)
    {
        change -= 25;
        counter++;
    }

    while (change >= 10)
    {
        change -= 10;
        counter++;
    }

    while (change >= 5)
    {
        change -= 5;
        counter++;
    }

    while (change >= 1)
    {
        change -= 1;
        counter++;
    }

    printf("$%i\n", counter);
}
