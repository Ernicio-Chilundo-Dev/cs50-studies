#include <cs50.h>
#include <stdio.h>

const int N = 2;
void print_word(string user_words[]);

int main(void)
{
    string words[N];

    for (int i = 0; i < N; i++)
    {
        words[i] = get_string("Word %i: ",i);
    }
    print_word(words);

}

void print_word(string user_words[])
{
for (int i = 0; i < N; i++)    
{
    for (int j = 0; user_words[i][j] != '\0'; j++)
    {
        printf("%c",user_words[i][j]);
    }
    printf("\n");
}
    
}