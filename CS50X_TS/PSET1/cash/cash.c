#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for the amount of change owed in cents
    int cents;
    do
    {
        // Prompt the user for cents (not dollars)
        cents = get_int("Change owed: ");
    }
    while (cents < 0); // Repeat until a non-negative amount is entered

    // Initialize the coin count
    int coins = 0;

    // Calculate the number of 25-cent coins (quarters)
    while (cents >= 25)
    {
        cents -= 25;
        coins++;
    }

    // Calculate the number of 10-cent coins (dimes)
    while (cents >= 10)
    {
        cents -= 10;
        coins++;
    }

    // Calculate the number of 5-cent coins (nickels)
    while (cents >= 5)
    {
        cents -= 5;
        coins++;
    }

    // Calculate the number of 1-cent coins (pennies)
    while (cents >= 1)
    {
        cents -= 1;
        coins++;
    }

    // Print the total number of coins needed
    printf("%d\n", coins);
}
