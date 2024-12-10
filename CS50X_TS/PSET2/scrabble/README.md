# Scrabble

This program simulates a Scrabble game for two players. Each player enters a word, and the program computes a score for each word based on Scrabble letter values. The player with the higher score wins. If the scores are equal, the game ends in a tie.

---

## How It Works

1. **Player Input:**
   - The program prompts **Player 1** and **Player 2** to enter a word.

2. **Scoring:**
   - Each letter in the word is assigned a point value according to Scrabble rules:
     - `A = 1`, `B = 3`, `C = 3`, `D = 2`, etc.
   - Non-alphabetical characters are ignored.
   - Uppercase and lowercase letters are treated equally.

3. **Comparison:**
   - The program compares the total scores for both players' words.
   - The winner is determined based on the higher score.

4. **Output:**
   - The program announces the winner:
     - "Player 1 wins!"
     - "Player 2 wins!"
     - "Tie!" if both scores are equal.

---

## Example Outputs

### Example 1: Player 1 Wins
Player 1 enters "hello" (score: 8), and Player 2 enters "world" (score: 9).
