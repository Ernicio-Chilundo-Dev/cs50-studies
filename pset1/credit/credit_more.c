#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user input 
    long number;

    do 
    {
        number = get_long("Card number: ");
    }
    while (number < 1);

}