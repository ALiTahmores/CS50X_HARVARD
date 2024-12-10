# Credit

This program validates credit card numbers and identifies their type (e.g., AMEX, MASTERCARD, VISA). It uses Luhn's Algorithm for validation and additional checks to determine the card type based on specific number patterns.

---

## How It Works

1. **User Input:**
   - The program prompts the user to enter a credit card number.
   - The number must be a positive integer.

2. **Validation:**
   - The card number is validated using **Luhn's Algorithm**, which checks the number's checksum.

3. **Card Type Identification:**
   - If the number is valid, the program determines the card type based on:
     - Length of the number.
     - Starting digits.
   - Supported card types:
     - **AMEX** (15 digits, starts with 34 or 37)
     - **MASTERCARD** (16 digits, starts with 51, 52, 53, 54, or 55)
     - **VISA** (13 or 16 digits, starts with 4)

4. **Output:**
   - If the card is valid, the program prints the card type (e.g., "VISA").
   - If the card is invalid, it prints "INVALID."

---

## Example Outputs

### Example 1: Valid Input
For a valid VISA card number `4111111111111111`, the output will be:
