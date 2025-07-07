#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    string text = get_string("Text: ");

    int letters = 0, words = 1, sentences = 0;

    // Count letters, words and sentences
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        char c = text[i];

        if (isalpha(c))
        {
            letters++;
        }
        else if (c == ' ')
        {
            words++;
        }
        else if (c == '.' || c == '!' || c == '?')
        {
            sentences++;
        }
    }

    // calculete L and S
    float L = (float) letters / words * 100;
    float S = (float) sentences / words * 100;

    // Coleman - Liau formula
    float index = 0.0588 * L - 0.296 * S - 15.8;

    // Round the index
    int grade = round(index);

    // Show the result
    if (grade == 1)
    {
        printf("Before grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else{
        printf("Grade %i\n", grade);
    }
}