# 🎲 Guess The Number

A simple terminal-based number guessing game built in C.

## 📋 Features

- Random number generation between 1 and 100
- 10 attempts to guess the number
- Hints after each wrong guess (too high / too low)
- Input validation
- Play again option

## 🛠️ Requirements

- GCC compiler
- Windows (uses `windows.h` for `Sleep`)

## 🚀 How to run

**1. Clone the repository**
```bash
git clone https://github.com/DaviFeitosaBastos/C-Projects.git
cd C-Projects/Guess-the-number
```

**2. Compile**
```bash
gcc guess.c -o guess
```

**3. Run**
```bash
./guess
```

## 📖 How to play

1. Run the program
2. A number between 1 and 100 will be generated
3. You have 10 attempts to guess it
4. After each guess you'll get a hint
5. Guess the number before running out of attempts!

## 🧠 Concepts used

- Random number generation with `rand()` and `srand()`
- Loops with `while` and `for`
- Input validation with `scanf`
- Functions and modularization
- `windows.h` for `Sleep`

## 🗺️ Roadmap

- [ ] Difficulty levels (easy, medium, hard)
- [ ] Score system
- [ ] Linux support
- [ ] Leaderboard

## 👨‍💻 Author

Made by [Davi Feitosa Bastos](https://github.com/DaviFeitosaBastos)

[LinkedIn](https://www.linkedin.com/in/davi-feitosa-2336a62bb/) • [Instagram](https://www.instagram.com/davifeitosa_4/)