# Readability

## Overview
The **Readability** program is part of CS50’s Problem Set 6. This exercise evaluates the readability level of a text using the Coleman-Liau index, which approximates the U.S. school grade level required to comprehend the text.

---

## Features
- **Text Analysis:** Counts the number of letters, words, and sentences in the input text.
- **Readability Calculation:** Uses the Coleman-Liau formula to determine the readability grade level.
- **User-Friendly Output:** Displays the grade level or categorizes it as "Before Grade 1" or "Grade 16+" if the text is too simple or advanced.

---

## How It Works
1. The program prompts the user to input a block of text.
2. It analyzes the text to count:
   - **Letters:** Alphabetic characters.
   - **Words:** Segments of text separated by spaces.
   - **Sentences:** Groups of text ending with `.`, `!`, or `?`.
3. The Coleman-Liau index is computed using the formula:
   \[
   \text{index} = 0.0588 \times L - 0.296 \times S - 15.8
   \]
   Where:
   - \( L \) is the average number of letters per 100 words.
   - \( S \) is the average number of sentences per 100 words.
4. The grade level is displayed:
   - For example, "Grade 8" for an index of 8.0.
   - Special cases:
     - **Before Grade 1:** For indices below 1.0.
     - **Grade 16+:** For indices of 16.0 or higher.

---

## Program Structure
### Key Steps
1. **Prompt for Input:** Collect text from the user.
2. **Analyze Text:** Count letters, words, and sentences.
3. **Calculate Readability:** Apply the Coleman-Liau formula.
4. **Output Result:** Print the grade level based on the calculated index.

---

## How to Use
1. **Run the Program**  
   Execute the program using:
   ```bash
   python readability.py
