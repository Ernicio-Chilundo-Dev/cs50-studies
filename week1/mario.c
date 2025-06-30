#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user input
    int height;
        do
        {
            height = get_int("What is the height of the pyramid? ");
        } while (height < 1 || height >8);
        
    // Print a pyramid of that height
        for (int i = 1; i <= height; i++)
        {
            // Space 
            for(int j = 1; j <= height - i; j++)
            {
                printf(" ");
            }
            // Hash
            for (int l = 1; l <= i; l++)
            {
                    printf("#");
                
            }
            printf("  ");

            for (int r = 1; r <= i; r++)
            {
                printf("=");
            }
            

            
            printf("\n");
        }
        
}
