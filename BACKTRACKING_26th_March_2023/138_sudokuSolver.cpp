#include <bits/stdc++.h>
using namespace std;

// function to print sudoku
void printSudoku(int board[9][9], int n)
{
    cout << endl << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << board[i][j] << "  ";
        }
        cout << endl;
    }
}

// this function returns true if placing the current value at given cell is safe or not
// if safe then it returns true else return false
// this function checks for 3 conditions and on the basis of that conditions it returns true or false
// condition 1 --> check the given value in the same row
// condition 2 --> check the given value in the same column
// condition 3 --> check the given value in the given 3x3 sub-matrix
bool isSafe(int value, int board[9][9], int i, int j) {
    // checking row, i.e., i represents row
    // for checking the value in the same row
    // our i should be same and j will move
    for(int column = 0; column < 9; column++) {
        if(board[i][column] == value) {
            return false;
        }
    }

    // checking column, i.e., j represents column
    // for checking the value in the same column
    // our j should be same and i will move
    for(int row = 0; row < 9; row++) {
        if(board[row][j] == value) {
            return false;
        }
    }

    // checking 3x3 sub-matrix --> this is the most important part
    for(int k = 0; k < 9; k++) {
        if(board[3 * (i / 3) + (k / 3)][3 * (j / 3) + (k % 3)] == value) {
            return false;
        }
    }

    // if the value is present in any cell of the above conditions then we have returned false already
    // but if crossing all the conditions we are standing here it means we are safe and return true now
    return true;
}

// this function return true or false basis on we found a solution or not
bool solveSudoku(int board[9][9], int n) {
    // using nested for loops we are traversing on each and every value of the given matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            // here we are checking for empty cells
            // if the cell is empty then only we can fill value over there
            // if the cell is not empty then it means there is a clue over there and we can't change the clue
            if(board[i][j] == 0) {
                for(int value = 1; value <= 9; value++) {
                    if(isSafe(value, board, i, j)) {
                        // if inserting a value at current i, j position is safe then we insert at that cell
                        board[i][j] = value;
                        // after inserting one value rest is handled by recursion
                        bool nextValue = solveSudoku(board, n);
                        // if we are successfully solve the next value then nextValue variable contains true else false
                        // and if its true it means we dont need backtracking step
                        // because of this condition we dont need base case in this solution
                        if(nextValue == true) {
                            return true;
                        }
                        // if there is a false in nextValue variable means we are not able to get answer for current cell
                        // then we backtrack and change the value to 0, means no solution for current cell
                        else {
                            board[i][j] = 0; // if no value can be inserted at that cell then we again set this cell to 0, this is a backtracking step
                        }
                    }
                }
                return false; // if no value from 1 -> 9 can be inserted then we return false
            }
        }
    }
    return true; // if all cells are successfully filled then return true
}

int main()
{
    int n = 9;
    
	// 0 represents empty cells
	int board[9][9] = { {2, 0, 9, 0, 0, 0, 6, 0, 0},
                        {0, 4, 0, 8, 7, 0, 0, 1, 2},
                        {8, 0, 0, 0, 1, 9, 0, 4, 0},
                        {0, 3, 0, 7, 0, 0, 8, 0, 1},
                        {0, 6, 5, 0, 0, 8, 0, 3, 0},
                        {1, 0, 0, 0, 3, 0, 0, 0, 7},
                        {0, 0, 0, 6, 5, 0, 7, 0, 9},
                        {6, 0, 4, 0, 0, 0, 0, 2, 0},
                        {0, 8, 0, 3, 0, 1, 4, 5, 0}
                      };

    cout << "\nSudoku before solution: ";
    printSudoku(board, n);

    if(solveSudoku(board, n)) {
        cout << "\nSudoku after solution: ";
        printSudoku(board, n);
    }
    else {
        cout << "\nNo solution exists";
    }

    cout << endl;
	return 0;
}