# 🗳️ Runoff Voting System in C

This project is an implementation of the **instant-runoff voting** system, commonly used in elections where voters rank candidates in order of preference. If no candidate wins a majority in the first round, the candidate with the fewest votes is eliminated, and votes are redistributed based on the voters’ next preferences. This process repeats until a candidate wins more than 50% of the vote or a tie occurs.

## 📋 How It Works

1. **Input candidates** via command line arguments.
2. **Input number of voters**.
3. Each voter ranks the candidates from most to least preferred.
4. The program:
   - Tabulates the top choices.
   - Checks if a candidate has more than 50% of votes.
   - If not, eliminates the candidate(s) with the fewest votes.
   - Redistributes votes and repeats.

## 🧠 Features

- Handles up to **100 voters** and **9 candidates**.
- Implements vote tabulation, minimum vote detection, and candidate elimination.
- Detects tie conditions when all remaining candidates have the same vote count.

## 🚀 Usage

Compile the code with:

```bash
clang -o runoff runoff.c -lcs50

./runoff Alice Bob Charlie
