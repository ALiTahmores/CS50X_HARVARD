# Cash

This program calculates the minimum number of coins needed to make change for a given amount of cents. It uses a greedy algorithm to ensure the smallest number of coins is used.

---

## How It Works

1. **User Input:**
   - The program prompts the user to input the amount of change owed in cents (non-negative integer).
   - If the user enters a negative value, the program repeatedly prompts until a valid input is provided.

2. **Coin Calculation:**
   - The program calculates the minimum number of coins required using U.S. coin denominations:
     - **25 cents (quarters)**
     - **10 cents (dimes)**
     - **5 cents (nickels)**
     - **1 cent (pennies)**
   - It uses a series of `while` loops to subtract the largest possible denomination first and increment the coin count accordingly.

3. **Output:**
   - The total number of coins required is printed to the console.

---

## Example Outputs

### Example 1: Valid Input
For an input of `41` cents, the program calculates:
- 1 quarter (25 cents)
- 1 dime (10 cents)
- 1 nickel (5 cents)
- 1 penny (1 cent)

The output will be:
