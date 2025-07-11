#include <cs50.h>
#include <string.h>
#include <stdio.h>

typedef struct {
    string name;
    string number;
}
person;

int main(void)
{

    person people[2];

    people[0].name = "Euler";
    people[0].number = "+258 875653187";

    people[1].name = "Ernicio";
    people[1].number = "+258 870568953";

    string name = get_string("Name: ");
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}