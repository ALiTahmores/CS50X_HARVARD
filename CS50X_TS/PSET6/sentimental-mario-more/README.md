# Mario (More Comfortable)

## Overview
The **Mario (More Comfortable)** program is part of CS50’s Problem Set 6. This exercise challenges students to create a text-based pyramid inspired by the classic video game *Super Mario Bros.*. Unlike the less comfortable version, this pyramid is double-sided and includes a gap between the two halves.

---

## Features
- **User Input Validation:** Ensures the user enters a height between 1 and 8.
- **Double-Sided Pyramid:** Dynamically generates a pyramid with a central gap of two spaces.
- **Interactive User Experience:** Prompts the user until valid input is provided.

---

## How It Works
1. The program prompts the user to enter a height for the pyramid (an integer between 1 and 8).
2. If the input is invalid, the program repeatedly prompts the user until a valid height is provided.
3. The program generates and prints a double-sided pyramid based on the provided height.

---

## Program Structure
### Key Steps
1. Validate the user’s input to ensure it's within the allowed range.
2. Use loops to construct the pyramid row by row, with spaces and `#` characters.
3. Print the pyramid to the console.

---

## How to Use
1. **Run the Program**  
   Execute the program using:
   ```bash
   python mario.py
