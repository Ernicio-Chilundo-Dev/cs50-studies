#include <cs50.h>
#include <stdio.h>

int main(void){
    
    //  Name
    string name = get_string("What's your name? ");

    // Age 
    int age = get_int("What's your age? ");

    // Hometown
    string hometown = get_string("What's your hometown? ");

    // Phone number
    string phoneNumber = get_string("What's your phone number? ");

    printf("My new friend's name is %s, %i, they are from %s and their phone number is %s\n", name, age, hometown, phoneNumber);
}