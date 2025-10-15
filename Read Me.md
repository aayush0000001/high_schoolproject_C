# C Command-Line Hangman Game

A classic implementation of the Hangman game built to run in a standard command-line terminal. This project was developed as a high school project to practice and demonstrate core programming concepts in the C language.

## Features

- **Classic Hangman Logic:** Guess letters to uncover the secret word.
- **Limited Guesses:** Players have 7 incorrect guesses before the game is over.
- **Progressive ASCII Art:** The hangman figure is drawn piece-by-piece with each incorrect guess, providing clear visual feedback.
- **Clean UI:** Displays the current codeword status, incorrect guesses, and all visual elements in a clear, organized way.
- **Modular Code:** The program is structured into multiple files (`main.c`, `functions.h`, `function_definition.c`) to separate core logic, function declarations, and UI display.

## How to Compile and Run

This project is written in standard C and should compile on most systems with a C compiler like GCC.

1.  **Clone the repository or download the files.**
2.  **Open a terminal** or command prompt in the project directory.
3.  **Compile the source files** using a C compiler. For example, with GCC:
    ```sh
    gcc main.c function_definition.c -o hangman
    ```
4.  **Run the executable:**
    ```sh
    ./hangman
    ```
