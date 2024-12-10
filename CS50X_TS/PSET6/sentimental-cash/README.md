# Cash

## Overview
The **Cash** program is part of CS50’s Problem Set 6. This exercise challenges students to calculate the minimum number of coins required to make a given amount of change using a greedy algorithm.

---

## Features
- **User Input Validation:** Ensures the user enters a valid positive numeric input.
- **Efficient Calculation:** Utilizes a greedy algorithm to minimize the number of coins.
- **Currency Denominations:** Supports U.S. currency denominations (quarters, dimes, nickels, and pennies).

---

## How It Works
1. The program prompts the user to enter an amount of change (in dollars or cents).
2. If the input is invalid (negative or non-numeric), the program repeatedly prompts the user until valid input is provided.
3. The program converts the input into cents and calculates the minimum number of coins needed to make the change using the largest denominations first.
4. The total number of coins is displayed as the output.

---

## Program Structure
### Key Steps
1. Validate the user’s input to ensure it is a positive numeric value.
2. Convert the amount from dollars to cents.
3. Use a greedy algorithm to determine the number of coins for each denomination:
   - Quarters (25¢)
   - Dimes (10¢)
   - Nickels (5¢)
   - Pennies (1¢)
4. Sum up the total number of coins and display the result.

---

## How to Use
1. **Run the Program**  
   Execute the program using:
   ```bash
   python cash.py
