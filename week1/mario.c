#include <stdio.h>
#include <cs50.h>

void print_row(int n);

int main(void){

    // Never change n
    const int n = 4;

    for(int i = 0; i < n; i++){
        print_row(n);
    }
}

void print_row(int n){
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}