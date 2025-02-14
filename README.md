# XOXO-game-in-C
Overview
The program simulates a simplified version of Tic-Tac-Toe, focusing on checking if Player 1 has won by achieving 3 'X's in a row or column. It does not consider diagonal wins or Player 2's moves. The program reads the moves of Player 1 and determines if a winning condition is met.

How It Works
Input:

The program reads the number of moves made by Player 1 (n1) and Player 2 (n2).

For each move of Player 1, it reads the coordinates (x, y) of the move.

Tracking Moves:

The program uses two arrays, rows and cols, to track the number of 'X's in each row and column.

Winning Condition:

If any row or column reaches a count of 3 'X's, Player 1 is declared the winner.

Output:

The program prints 1 if Player 1 wins, otherwise 0.

Code Structure
The code consists of the following components:

check_winner Function
Purpose: Checks if Player 1 has won the game.

Parameters:

int n1: Number of moves made by Player 1.

int n2: Number of moves made by Player 2 (not used in this implementation).

Logic:

Initializes rows and cols arrays to track 'X's in each row and column.

Iterates through Player 1's moves, updating the rows and cols arrays.

Checks if any row or column has 3 'X's.

Returns 1 if a winning condition is met, otherwise 0.

main Function
Purpose: Drives the program.

Steps:

Reads the number of moves for Player 1 and Player 2.

Calls check_winner to determine if Player 1 has won.

Prints the result (1 for win, 0 otherwise).

Functions
check_winner
Checks if Player 1 has won the game.

c
Copy
int check_winner(int n1, int n2);
Usage
Compile the program using a C compiler (e.g., gcc):

bash
Copy
gcc -o tictactoe tictactoe.c
Run the program:

bash
Copy
./tictactoe
Input the number of moves for Player 1 and Player 2.

Input the coordinates of Player 1's moves.

The program will output 1 if Player 1 wins, otherwise 0.
