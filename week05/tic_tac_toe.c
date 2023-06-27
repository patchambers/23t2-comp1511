// Function to check whether has won a game of tic tac toe
// Patrick Chambers (z5264081), 27/6/23

#include <stdio.h>

#define SIZE 5

int did_player_win(char player, char board[SIZE][SIZE]);

int main(void) {
    char no_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {'X', ' ', ' ', ' ', 'O'},
    };
    char x_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {' ', 'X', ' ', ' ', 'O'},
    };
    char o_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'O', ' ', 'O', ' '},
        {' ', 'X', 'X', ' ', ' '},
        {'O', 'O', 'O', 'O', 'O'},
        {'X', 'X', ' ', ' ', 'O'},
    };


    if (did_player_win('X', o_wins_board)) {
        printf("X Won This Board!\n");
    } else if (did_player_win('O', o_wins_board)) {
        printf("O Won This Board!\n");
    } else {
        printf("Nobody has won this board!\n");
    }
}

// Check whether the player has won the game by getting SIZE tokens in a row, 
// in any direction
// Takes a char representing a player and the 2D array representing the board
// Returns 1 if this player has won, returns 0 otherwise
int did_player_win(char player, char board[SIZE][SIZE]) {

    // Check if player has 5 of their tokens in a row

    // Loop through all rows
    int row = 0;
    while (row < SIZE) {
        // Loop through each column of each row
        int count = 0;
        int col = 0;
        while (col < SIZE) {
            if (board[row][col] == player) {
                count++;
            }
            col++;
        }
        // if row is completely made up of 'player' char, that player has won
        if (count == SIZE) {
            return 1;
        }
        row++;
    }


    // Check if player has 5 of their tokens in a column
    row = 0;
    // NOTE: not best practice to reuse the 'row' loop variable here, could 
    // be avoided by choosing a different name, using for loops or putting this 
    // code into a separate function
    while (row < SIZE) {
        int count = 0;
        int col = 0;
        while (col < SIZE) {
            if (board[col][row] == player) {
                count++;
            } 
            col++;
        }
        if (count == SIZE) {
            return 1;
        }
        row++;
    }

    // Check if player has 5 of their tokens in a diagonal
    // Check main diagonal
    int i = 0;
    int count_main = 0;
    while (i < SIZE) {
        if (board[i][i] == player) {
            count_main++;
        }
        i++;
    }
    // If player has 5 tokens in main diagonal they have won
    if (count_main == SIZE) {
        return 1;
    }

    // Check reverse diagonal
    i = 0;
    int count_reverse = 0;
    while (i < SIZE) {
        if (board[i][SIZE - 1 - i] == player) {
            count_reverse++;
        }
        i++;
    }
    // If player has 5 tokens in reverse diagonal they have won
    if (count_reverse == SIZE) {
        return 1;
    }


    return 0;
}

