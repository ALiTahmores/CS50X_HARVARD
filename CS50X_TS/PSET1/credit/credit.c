#include <cs50.h>
#include <stdio.h>

bool check_luhn(long number);
string get_card_type(long number);

int main(void)
{
    // Get the card number from the user
    long cardNumber = get_long("Number: ");

    // Check if the card number is valid using Luhn's algorithm
    if (check_luhn(cardNumber))
    {
        // Get the type of card based on the number
        string type = get_card_type(cardNumber);
        printf("%s\n", type);
    }
    else
    {
        printf("INVALID\n");
    }
}

bool check_luhn(long number)
{
    int sum = 0;
    bool alternate = false;

    while (number > 0)
    {
        int digit = number % 10;
        if (alternate)
        {
            digit *= 2;
            if (digit > 9)
                digit -= 9;
        }
        sum += digit;
        alternate = !alternate;
        number /= 10;
    }

    return (sum % 10) == 0;
}

string get_card_type(long number)
{
    int length = 0;
    long start_digits = number;

    // Find the length of the number and the starting digits
    while (start_digits >= 100)
    {
        start_digits /= 10;
        length++;
    }
    length += 2; // adjust length for the last two digits

    // Check the card type based on length and starting digits
    if ((start_digits == 34 || start_digits == 37) && length == 15)
    {
        return "AMEX";
    }
    else if (start_digits >= 51 && start_digits <= 55 && length == 16)
    {
        return "MASTERCARD";
    }
    else if ((start_digits / 10 == 4) && (length == 13 || length == 16))
    {
        return "VISA";
    }

    return "INVALID";
}
