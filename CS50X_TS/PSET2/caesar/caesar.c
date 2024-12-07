#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Ensure the program is run with exactly one command-line argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Ensure the key provided is a valid non-negative integer
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Convert the key from string to integer
    int key = atoi(argv[1]);

    // Prompt the user for plaintext
    string plaintext = get_string("plaintext:  ");

    printf("ciphertext: ");

    // Iterate over each character in the plaintext
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        char c = plaintext[i];

        // If the character is an uppercase letter
        if (isupper(c))
        {
            printf("%c", 'A' + (c - 'A' + key) % 26);
        }
        // If the character is a lowercase letter
        else if (islower(c))
        {
            printf("%c", 'a' + (c - 'a' + key) % 26);
        }
        // If the character is not a letter, print it as is
        else
        {
            printf("%c", c);
        }
    }

    // Print a newline after the ciphertext
    printf("\n");

    return 0;
}
