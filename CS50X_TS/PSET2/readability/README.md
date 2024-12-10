# Readability

This program evaluates the readability of a given text using the Coleman-Liau index, which calculates the approximate U.S. grade level needed to comprehend the text.

---

## How It Works

1. **Input:**
   - The program prompts the user to enter a block of text.

2. **Text Analysis:**
   - The program counts:
     - **Letters:** Alphabetic characters (ignoring spaces, punctuation, etc.).
     - **Words:** Sequences of characters separated by spaces.
     - **Sentences:** Ended by '.', '!', or '?'.

3. **Index Calculation:**
   - Using the following formula:
     ```
     index = 0.0588 * L - 0.296 * S - 15.8
     ```
     - `L`: Average number of letters per 100 words.
     - `S`: Average number of sentences per 100 words.
   - The index is rounded to the nearest whole number.

4. **Output:**
   - The program outputs the reading level:
     - "Before Grade 1" for texts simpler than Grade 1.
     - "Grade 16+" for college-level or higher texts.
     - "Grade X" for other grade levels.

---

## Example Outputs

### Example 1: Simple Text
Input:
