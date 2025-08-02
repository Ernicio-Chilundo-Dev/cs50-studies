#include <cs50.h>
#include <stdint.h>
#include <stdio.h>

int main(int argc, string argv[])
{
   // Check for usage, must for 2 CLA 
    if (argc != 2)
    {
        printf("Please provide only one filname\n");
        return 1;
    }

   // Open file
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Counld not open file\n");
        return 1;
    }

    // Create buffer for file
    uint8_t buffer[4];

    // Create an array of signature bytes(PDF Signature)
    uint8_t signature[] = {0x25, 0x50, 0x44, 0x46};

    // Ready first 4 bytes from the file
    size_t ready_bytes = fread(buffer, sizeof(uint8_t), sizeof(signature), input);
    if (ready_bytes != sizeof(signature))
    {
        printf("File too small to be a PDF.\n");
        fclose(input);
        return 1;
    }

    // Check the first 4 bytes again signature bytes
    for (int i = 0; i < 4; i++)
    {
        if (signature[i] != buffer[i])
        {
            printf("This is not a PDF!\n");
            fclose(input);
            return 0;
        }
    }

    // Sucess!
    printf("It is a PDF!\n");

    // Close the file
    fclose(input);

    return 0;
}