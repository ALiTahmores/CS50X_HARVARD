# Runoff Election

## Overview
This program simulates a **runoff election**, a voting system used to ensure that a candidate wins by majority. Each voter ranks the candidates in order of preference. If no candidate wins a majority of first-choice votes, the candidate(s) with the fewest votes are eliminated. Their votes are then redistributed to the next preferred candidates. This process continues until a winner is determined or a tie occurs.

## Features
- Supports up to **100 voters** and **9 candidates**.
- Allows voters to rank candidates based on their preference.
- Eliminates candidates with the fewest votes and redistributes their votes.
- Detects ties and handles them appropriately.

## How to Use
1. **Compile the Program**  
   Use the following command to compile the program:
   ```bash
   make runoff
