#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for the pyramid's height
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    // Print a pyramid of that height
    for (int i = 0; i < n; i++)
    {
        // Print leading spaces
        for (int k = 0; k < n - (i + 1); k++)
        {
            printf(" ");
        }
        // Print left hashes
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        // Print gap between pyramids
        printf("  ");
        // Print right hashes
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        // Move to the next line
        printf("\n");
    }
}
