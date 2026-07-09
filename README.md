# 🎯 Number Guessing Game

## Project Name
**Number Guessing Game**

**Version:** 1.0

---

## 📖 Description

The Number Guessing Game is a simple C++ console application in which the computer randomly generates a secret number between **1 and 100**.

The player has to guess the correct number. After every incorrect guess, the program provides a hint by telling the player whether the guess was **too high** or **too low**. The game continues until the correct number is guessed.

Once the player wins, the program displays the total number of attempts and asks whether they would like to play another game.

---

## ✨ Features

- 🎲 Random number generation between 1 and 100
- 📈 Unlimited guessing attempts until the correct answer
- ⬆️ "Too High" hint
- ⬇️ "Too Low" hint
- ✅ Displays the total number of attempts
- 🔄 Option to play multiple games
- 🚪 Clean exit option

---

## 🛠 Concepts Used

This project was built using the following C++ concepts:

- Functions
- Function parameters
- Pass-by-reference
- Return values
- Variables
- `if`, `else if`, and `else`
- Nested `while` loops
- `break` statement
- Random number generation using:
  - `rand()`
  - `srand()`
  - `time(0)`
- Header files (`cstdlib` and `ctime`)
- User input and output using `cin` and `cout`

---

## 🧠 Program Logic

1. Display the game title.
2. Generate a random number between 1 and 100.
3. Ask the user to guess the number.
4. Compare the guess with the secret number.
5. Display:
   - **Too High**
   - **Too Low**
   - **Correct!**
6. Count the number of attempts.
7. Ask the user if they would like to play another game.
8. Repeat the process until the user chooses to exit.

---

## ▶️ How to Compile

Open the terminal in Visual Studio Code and run:

```bash
g++ src/main.cpp -o guessing_game.exe
```

If there are no compilation errors, the executable file will be created successfully.

---

## ▶️ How to Run

In the terminal, execute:

```bash
.\guessing_game.exe
```

---

## 📂 Project Structure

```
number-guessing-game/
│
├── README.md
└── src/
    └── main.cpp
```

---

## 🚀 Future Improvements

Some features that can be added in future versions:

- Difficulty levels (Easy, Medium, Hard)
- Limited number of attempts
- Score system
- High score tracking
- Input validation for invalid entries
- Better console UI

---

## 👩‍💻 Author

**Vaishnavi Singh**

Built as part of my C++ learning journey.
