# 🔐 Substitution Cipher (CS50)

This project implements a **Substitution Cipher** — a classical encryption technique where each letter of the plaintext is replaced with a corresponding letter from a provided key.

## 📌 How It Works

The program:
- Takes a 26-character key from the command line (each letter must appear exactly once, case-insensitive).
- Validates the key for:
  - Length of 26 characters
  - Only alphabetic characters
  - No repeated letters
- Prompts the user to enter plaintext.
- Outputs the corresponding ciphertext using the substitution key.
- Preserves case (uppercase/lowercase) and ignores non-alphabetic characters.

---

## 🚀 Usage

### 🛠 Compile

```bash
make substitution

### Run

./substitution YPLTAVKREWQZMXNCBIOSJDHFUG

Sample output

Plaintext: Hello, World!
Ciphertext: Eiqql, Vgksw!




