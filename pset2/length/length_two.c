#include <cs50.h>
#include <stdio.h>

// Prototype

int string_length(string s);

int main(void)
{
    string name = get_string("Enter your name: ");
    int length = string_length(name);

    printf("%i\n",length);
}

int string_length(string s)
{
    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }

    return n;
}