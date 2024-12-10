# DNA

## Overview
The **DNA** program is part of CS50’s Problem Set 6. This exercise involves identifying individuals based on their DNA sequence by analyzing Short Tandem Repeats (STRs) and comparing them with a database.

---

## Features
- **STR Analysis:** Counts occurrences of specific STRs in a given DNA sequence.
- **Database Matching:** Compares STR counts to a database of individuals to determine a match.
- **Efficient Comparison:** Implements a method to handle large DNA sequences and multiple STRs.

---

## How It Works
1. **Input Files**:
   - **Database CSV File:** Contains individuals' names and STR counts.
   - **DNA Sequence File:** Contains a DNA sequence to analyze.
2. **Process**:
   - Parse the database and DNA sequence.
   - Identify the longest consecutive runs of each STR in the DNA sequence.
   - Compare the results with the database to find a match.
3. **Output**:
   - Prints the name of the matching individual if found.
   - Prints "No match" if no individual matches the STR counts.

---

## Program Structure
### Key Steps
1. **Parse Input Files**:
   - Use `csv` module to read the database.
   - Read the DNA sequence from a text file.
2. **Analyze STRs**:
   - For each STR, calculate the longest consecutive sequence in the DNA.
3. **Compare with Database**:
   - Match the calculated STR counts against each individual in the database.
4. **Output Result**:
   - Print the name of the matching individual or "No match."

---

## How to Use
1. **Run the Program**  
   Execute the program using:
   ```bash
   python dna.py database.csv sequence.txt
