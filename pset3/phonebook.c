#include <cs50.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    string names[] = {"Euler", "Ernicio"};
    string numbers[] = {"+258 875653187", "+258 870568953"};

    string name = get_string("Name: ");

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}