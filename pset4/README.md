# PDF Signature Checker in C

This program checks whether a given file is a valid PDF by verifying its **magic number (signature)** in the first 4 bytes. The standard PDF signature is:


If the file starts with these bytes, the program considers it a PDF.

---

## ✅ Features
- Validates command-line arguments (requires one filename).
- Opens the file and ensures it exists.
- Reads the first 4 bytes and checks against the PDF signature.
- Handles:
  - Missing file
  - File too small (< 4 bytes)
  - Non-PDF files
- Displays clear messages for each case.

---

## 📂 How It Works
1. The program takes **one argument**: the path to the file you want to check.
2. It reads the first 4 bytes of the file.
3. Compares them to the standard PDF signature `%PDF`.
4. Prints whether the file is a PDF or not.

---

## ▶️ Usage

### **Compile the program:**
```bash
gcc pdf.c -o pdf
