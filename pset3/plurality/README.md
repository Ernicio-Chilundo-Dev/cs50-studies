# 🗳️ Plurality Voting System

This project implements a simple **plurality voting system** in C. It allows users to vote for a list of candidates, then determines and prints the winner(s) of the election. If there's a tie, all candidates with the highest vote count are displayed.

---

## 📂 File Name

`plurality.c`

---

## 📌 Features

- Accepts candidates via command-line arguments.
- Allows a custom number of voters to cast their votes.
- Handles invalid votes gracefully.
- Counts votes correctly using string comparison.
- Displays the winner(s), supporting ties.

---

## 📦 How It Works

1. **Input**: 
   - The user provides candidate names as command-line arguments.
   - Then, the user enters how many voters will participate.
   - Each voter is prompted to vote by entering a candidate's name.

2. **Processing**:
   - The program updates each candidate's vote count.
   - Invalid votes are detected and ignored.

3. **Output**:
   - After all votes are cast, the program prints the winner(s).

---

## ✅ Example Usage

```bash
$ ./plurality Ernicio Euler Ricardo
Number of voters: 3
Vote: Ernicio
Vote: Ricardo
Vote: Ernicio
Ernicio


