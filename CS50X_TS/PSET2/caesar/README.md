# Caesar Cipher

This program encrypts a given plaintext using the Caesar cipher, a substitution cipher that shifts each letter by a specified number of positions in the alphabet.

---

## How It Works

1. **Input:**
   - The program accepts a **single command-line argument**, which is a **non-negative integer** representing the key (the number of positions to shift each letter).

2. **Validation:**
   - The key must be a valid non-negative integer. If not, the program will output:
     ```
     Usage: ./caesar key
     ```
     and exit with a status code of 1.

3. **Encryption Process:**
   - For each character in the plaintext:
     - If it's an **uppercase letter**, it is shifted while maintaining uppercase.
     - If it's a **lowercase letter**, it is shifted while maintaining lowercase.
     - Non-alphabetic characters remain unchanged.

4. **Output:**
   - The program outputs the encrypted text (ciphertext).

---

## Example Outputs

### Example 1: Basic Input
Input:
```bash
./caesar 1
plaintext:  hello
