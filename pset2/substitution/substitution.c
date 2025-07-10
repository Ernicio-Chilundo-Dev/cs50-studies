#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


// Valid_key
bool valid_key(string key);

int main(int argc, string argv[])
{

    if (argc != 2 || !valid_key(argv[1]))
    {
        printf("Usage: ./Substitution KEY\n");
        return 1;
    }

    string key = argv[1];

    string plaintext = get_string("Plaintext: ");

    printf("Ciphertext: ");

    for (int i = 0 , len = strlen(plaintext); i < len ; i++)
    {
        char c = plaintext[i];
        
        if (isupper(c))
        {
            int index = c - 'A';
            printf("%c", toupper(key[index]));
        }
        else if (islower(c))
        {
            int index = c - 'a';
            printf("%c", tolower(key[index]));
        }
        else
        {
            printf("%c", c);
        }
    }
    printf("\n");
}


bool valid_key(string key)
{
    if (strlen(key) != 26)
    {
        return false;
    }

    bool seen[26] = {false};

    for (int i = 0; i < 26; i++)
    {
        if (!isalpha(key[i]))
        {
            return false;
        }

        int index = toupper(key[i]) - 'A';

        if (seen[index])
        {
            return false;
        }

        seen[index] = true;
    }

    return true;
}