#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, string argv[])
{

    // Get user's input
    if (argc != 2)
    {
        printf("Please provide a word.\n");
        return 1;
    }

    string text = argv[1];

    for (int i = 0, n  = strlen(text); i < n; i++)
    {

        if (!isalpha(text[i]))
        {
            printf("This is not a letter.\n");
            return 2;
        }
    }


    // Iterate throught each element in the string
    for (int i = 1, n = strlen(text); i < n; i++)
    {
        if (text[i] < text[i - 1])
        {
            printf("No\n");
            return 0;
        }
    }
 
    printf("Yes\n");
}