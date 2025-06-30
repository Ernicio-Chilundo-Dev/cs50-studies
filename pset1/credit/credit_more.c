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

    // Luhn algorithm

    int sum1 = 0;
    int sum2 = 0;
    int position = 0;
    long temp = number;

    while (temp > 0)
    {
        int digit = temp % 10;

        if (position % 2 == 0)
        {
            sum1 += digit;
        }
        else
        {
            int doubled = digit * 2;
            sum2 += (doubled / 10) + (doubled % 10);
        }

        temp /= 10;
        position++;
    }

    int total = sum1 + sum2;

    // Check the validity of the number
    if (total % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }

    // Check of the lenght and starding the digits
    int length = 0;
    temp =number;
    while (temp > 0)
    {
        temp /= 10;
        length++;
    }

    long start = number;
    while (start >= 100)
    {
        start /= 10;
    }

    // Card identification

    if ((start == 34 || start == 37) && length == 15)
    {
        printf("AMEX\n");
    }
    else if (start >= 51 && start <= 55 && length == 16)
    {
        printf("MESTERCARD\n");
    }
    else if ((start / 10 == 4) && (length == 13 || length == 16))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}