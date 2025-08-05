# 🗳️ Online Voting System – C++ Console Application

A simple and interactive console-based voting system built in C++. This was developed as a beginner-level project for learning basic concepts like user authentication, conditionals, loops, and switch-case logic.

---

## 📌 Features

### 👤 User Registration
- Users can create an account with a username and masked password input.

### 🔐 Login System
- Only registered users can access the voting system using valid credentials.

### 🗳️ Single Vote Enforcement
- Prevents a user from voting multiple times in a session using a flag.

### 🗂️ Five Political Parties to choose from:
- PTI  
- PPP  
- PML-N  
- ANP  
- JI

### 📊 Vote Counting
- Displays the current vote count for each party after each vote.

### 🔁 Repeat Option
- Allows users to restart the program or exit as needed.

---

## ⚙️ How It Works

1. User registers with a username and password (password is hidden with `*` characters).
2. System clears the screen using `system("cls")`.
3. User logs in using the same credentials.
4. Once logged in, the user selects a party to vote for using a letter key (A–E).
5. System ensures a user can only vote once per run.
6. Votes are tallied and displayed immediately.
7. User is asked whether they want to continue or exit.

---

## 🧠 Concepts Used

- `#include <iostream>`, `<string>`, `<conio.h>`
- Console I/O operations
- `do-while` loop
- `switch` statements
- Basic user input masking with `_getch()`
- Conditional logic and flags
- Screen clearing with `system("cls")`

---

## 🔧 Requirements

- C++ Compiler (e.g., `g++`, `MinGW`, or Turbo C++)
- Windows Terminal or compatible shell (uses `<conio.h>` and `system("cls")`)

---

## 🧑‍💻 Author

**Lujain Mahesar**  
*1st Semester C++ Project*  
GitHub: [@Lujain-Mahesar](https://github.com/Lujain-Mahesar)

---

## 📄 License

This project is licensed under the **MIT License**.

