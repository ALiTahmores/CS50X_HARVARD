# Credit

## Overview
The **Credit** program is part of CS50’s Problem Set 6. This exercise challenges students to determine the validity of a credit card number using Luhn's Algorithm and to identify the type of credit card based on the number’s prefix and length.

---

## Features
- **Card Validation:** Determines if the credit card number is valid using Luhn's Algorithm.
- **Card Identification:** Detects the type of card (AMEX, MasterCard, or Visa) based on industry standards.
- **Error Handling:** Handles invalid inputs and outputs appropriate error messages.

---

## How It Works
1. The program prompts the user for a credit card number.
2. It checks the validity of the number using Luhn's Algorithm:
   - Starting from the second-to-last digit, double every other digit.
   - If the result is greater than 9, add the digits of the result.
   - Sum all the modified digits and the untouched digits.
   - If the total modulo 10 is 0, the card number is valid.
3. If valid, the program determines the card type:
   - **AMEX:** Starts with 34 or 37 and is 15 digits long.
   - **MasterCard:** Starts with 51, 52, 53, 54, or 55 and is 16 digits long.
   - **Visa:** Starts with 4 and is either 13 or 16 digits long.
4. Outputs the card type or `INVALID` if the card fails validation.

---

## Program Structure
### Key Steps
1. Prompt the user for input and validate it.
2. Implement Luhn's Algorithm to check the card number’s validity.
3. Use the card’s prefix and length to identify the card type.
4. Print the result (`AMEX`, `MasterCard`, `Visa`, or `INVALID`).

---

## How to Use
1. **Run the Program**  
   Execute the program using:
   ```bash
   python credit.py
