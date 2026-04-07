# 🧮 Calculator in C

A simple terminal-based calculator built in C as my first project in the language.

## 📋 Features

- Addition, subtraction, multiplication and division
- Input validation (invalid operators, division by zero, non-numeric input)
- Terminal clearing and delay for better user experience
- Menu-driven interface

## 🛠️ Requirements

- GCC compiler
- Windows (uses `unistd.h` for `Sleep` and `system("cls")`)

## 🚀 How to run

**1. Clone the repository**
```bash
git clone https://github.com/seuusuario/calculator-c.git
cd calculator-c
```

**2. Compile**
```bash
gcc Calculator.c -o calculator
```

**3. Run**
```bash
./calculator
```

## 📁 Project structure
```
FIRST_PROJECT_IN_C/
├── Calculator.c    # main source code
├── .gitignore      # ignored files
└── README.md       # this file
```

## 📖 How to use

1. Run the program
2. Choose option `1` to start or `0` to exit
3. Type the operator `+`, `-`, `*` or `/`
4. Type the two numbers
5. See the result

## 🧠 Concepts used

- Functions
- Switch/case
- While loops
- Input validation with `scanf`
- `ctype.h` for character checking
- `windows.h` for `Sleep` and `cls`

## 🗺️ Roadmap  

- [] Operation history                      ⬜ It'll be released soon
- [] Save history to a '.txt' file          ⬜ It'll be released soon
- [] Square root and power operations       ⬜ It'll be released soon
- [] Linux support                          ⬜ It'll be released soon


## 👨‍💻 Author

Made by Davi Feitosa — first project in C, coming from Python.
