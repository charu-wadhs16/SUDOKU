# Sudoku
Sudoku:

Sudoku is a puzzle game designed for a single player, much like a crossword puzzle. The puzzle itself is nothing more than a grid of little boxes called cells.
It is a simple project built in C++ language.

Input:

Given a partially filled 9×9 2D array arr[9][9]

Output:

Solved Sudoku

Edge case:

Error message is displayed if user enters invalid input or if sudoku is completely filled.

How to play?

A Sudoku puzzle consists of 81 cells which are divided into nine columns, rows and regions. The task is now to place the numbers from 1 to 9 into the empty cells in such a way that in every row, column and 3×3 region each number appears only once.

How to run the code?

For that we just need a compiler supporting C++ e.g. GCC installed on our system and compile it using cmd or we can use any online C++ compiler.

Functions used:
checkforit();- returns 1 if sudoku is partially filled else return 0.

validInput();-returns 1 if entered numbers are within range 0 to 9

checkRepetition();-check for repetition of number within rows, columns or sub squares.

Sudoku();-solves the sudoku.


