/*
the pseduecode :
 Start
Read the number of moves made by player 1 (n1) and player 2 (n2)
Initialize arrays rows and cols with size 3 to keep track of the number of Xs and Os in each row and column
For each move made by player 1:
   -Read the x and y coordinates of the move
   -Increment the count of Xs in the corresponding row and column
   -If any row or column has 3 Xs, player is the winner and end the program
If no winner is found after checking all moves, return 0
End
*/

#include <stdio.h>

int check_winner(int n1, int n2) {
    // track the number of Xs and Os in each row and column
    //initialized to 3 because its representing the 3 rows and 3 columns in the game
    int rows[3] = {0};
    int cols[3] = {0};

    //iterating throguh each move n1= total number of moves
    for (int i = 0; i < n1; i++) {
        int x, y; //read x,y coordinates
        scanf("%d %d", &x, &y);
// rows and columns are incremented based on the current move
        rows[x]++;
        cols[y]++;

        // Checking for a row win
        if (rows[x] == 3) {
            return 1;
        }

        // Checking for a column win
        if (cols[y] == 3) {
            return 1;
        }
    }


    // If a diagonal win or draw, return 0
    return 0;
}

int main() {
    // Reading the inputs for total moves for player 1 and 2
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    // checking for the win
    int winner = check_winner(n1, n2);

    // printing either 1 or 0
    printf("%d\n", winner);

    return 0;
}