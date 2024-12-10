# Speller

## Overview
The **Speller** program is a spell-checking application that reads a text file and identifies misspelled words. It uses a hash table to store a dictionary of words and performs efficient lookups to determine whether words in a given text exist in the dictionary.

This exercise is part of CS50's Problem Set 5 and focuses on concepts such as hash tables, memory management, and file I/O.

---

## Features
- **Efficient Spell Checking:** Uses a hash table to store dictionary words for quick lookups.
- **Custom Dictionary Support:** Allows users to specify their own dictionary file.
- **Performance Analysis:** Measures runtime for key operations like loading the dictionary, checking words, and unloading the hash table.

---

## How It Works
1. **Load Dictionary:** Reads a dictionary file and hashes each word into a hash table.
2. **Check Words:** Reads a text file, tokenizes its contents, and checks each word against the dictionary.
3. **Unload Dictionary:** Frees all allocated memory used by the hash table.
4. **Performance Analysis:** Outputs the number of words checked, misspelled words, and the time taken for each operation.

---

## Program Structure
### Key Functions
1. `load`: Reads the dictionary file into memory and populates the hash table.
2. `check`: Checks if a given word exists in the hash table.
3. `size`: Returns the total number of words loaded into the dictionary.
4. `unload`: Frees memory allocated for the hash table.
5. `hash`: Hashes a word to an index for efficient storage and lookup.

---

## How to Use
1. **Compile the Program**  
   Run the following command:
   ```bash
   make speller
