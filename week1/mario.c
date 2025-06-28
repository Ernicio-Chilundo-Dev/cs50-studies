#include <cs50.h>
#include <stdio.h>

void print_space(int height);

int main(void)
{
    // Prompt user input
    int height;
        do
        {
            height = get_int("What is the height of the pyramid? ");
        } while (height < 1);
        
    // Print a pyramid of that height
        for (int i = 0; i < height; i++)
        {
            // Space 
            for(int j = 1; j < height - i; j++)
            {
                printf("-");
            }
            printf("\n");
        }
        
}
