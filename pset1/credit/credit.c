#include <cs50.h>
#include <stdio.h>

bool luhn_check(long number);

int main(void)
{
    // Prompt user input
    long card;

    do 
    {
        card = get_long("Card number; ");
    }
    while (card < 1);

    if (luhn_check(card))
    {
        printf("Valido\n");
    }
    else
    {
        printf("Invalido\n");
    }
}

bool luhn_check(long number)
{
    int sum = 0;
    bool second = false;

    while (number > 0)
    {
        int digit = number % 10;

        if (second)
        {
            digit *= 2;

            if (digit > 9)
            {
                digit -= 9;
            }
        }

        sum += digit;
        number /= 10;
        second = !second;
    }
    return (sum % 10 == 0);
}