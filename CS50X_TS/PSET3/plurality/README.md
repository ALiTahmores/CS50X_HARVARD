# Plurality

This program simulates a plurality voting system, where voters cast their votes for one candidate, and the candidate with the most votes wins. In case of a tie, all candidates with the highest number of votes are declared winners.

---

## How It Works

### Command-Line Arguments
- The program accepts candidate names as command-line arguments.
- A maximum of **9 candidates** is allowed.
- If no candidates are provided, or if the number exceeds the maximum limit, the program exits with an error.

### Voting Process
1. The user specifies the number of voters.
2. Each voter casts their vote by entering the name of their preferred candidate.
3. Votes are validated:
   - If the name matches one of the candidates, the vote is recorded.
   - If the name is invalid, the program notifies the user and ignores the vote.

### Results
- Once all votes are cast, the program determines the winner(s):
  - The candidate(s) with the most votes are printed.
  - If there is a tie, all candidates with the highest votes are declared winners.

---

## Example Usage

### Compilation
Compile the program using `make`:
```bash
make plurality
