#include <cs50.h>
#include <stdint.h>
#include <stdio.h>

int main(int argc, string argv[])
{
   // Check for usage, must for 2 CLA 

   // Open file
    FILE *input = fopen(argv[1], "r");

    // Create buffer for file
    uint8_t buffer[4];

    // Create an array of signature bytes
    uint8_t signature[] = {0x25, 0x50, 0x44, 0x46};

    // Ready first 4 bytes from the file
    fread(buffer, sizeof(uint8_t), 4, input);

    // Check the first 4 bytes again signature bytes

    // Sucess!
}