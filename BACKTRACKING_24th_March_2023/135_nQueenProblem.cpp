#include <bits/stdc++.h>
using namespace std;

void printSolution(vector<vector<char>> &board, int n) {
    cout << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// this function let us know that placing the queen at current cell is safe or not
// by checking the previous left side row, upper left side diagonal & lower left side diagonal
bool isSafe(int row, int column, vector<vector<char>> &board, int n) {
    // we check for previous 3 directions, i.e., previous left row, upper left diagonal & lower left diagonal
    // for next rows and diagonals we don't need to check because there is no Queen right now
    
    int i = row;
    int j = column;

    // first we are checking the left row
    while(j >= 0) {
        if(board[i][j] == 'Q') {
            return false;
        }
        j--;
    }

    i = row;
    j = column;

    // now we are checking the upper left diagonal
    while(i >= 0 and j >= 0) {
        if(board[i][j] == 'Q') {
            return false;
        }
        i--;
        j--;
    }

    i = row;
    j = column;

    // now we are checking the lower left diagonal
    while(i < n and j >= 0) {
        if(board[i][j] == 'Q') {
            return false;
        }
        i++;
        j--;
    }

    // if false is not returned till now means the cell is safe so we return true
    return true;
}

void nQueenSolve(vector<vector<char>> &board, int column, int n) {
    
    // base case --> we stop when we find 1 solution, i.e., when we place our queen in all columns
    // and what about other solutions?? Recursion will calculate on its own
    if(column >= n) {
        printSolution(board, n);
        return;
    }

    // we solve 1 case and rest cases recursion will solve automatically
    // 1 case means, try 1 Queen in all rows of current column and for rest Queens recursion will automatically try
    // now we have 1 cell --> columns is coming as a parameter and row we are iterating through below for loop
    for(int row = 0; row < n; row++) {
        // at every iteration, first we check that on current cell, placing the queen is safe or not
        // if yes then we place the Queen else not
        if(isSafe(row, column, board, n)) {
            // 1st Queen placed at current row and column
            board[row][column] = 'Q';
            // we place 1 Queen above
            // now rest of the things, recursion will do automatically
            nQueenSolve(board, column + 1, n);
            // backtracking step
            board[row][column] = '-';
        }
    }
}

int main() {
    
    // n means how many queens and size of the board, for example, 4 queen & 4 x 4 board
    int n;
    cout << "\nEnter no. of queens(n) you want to place in n x n matrix: ";
    cin >> n;

    if(n == 0 || n == 1 || n == 2 || n == 3) {
        cout << "\nSolution not exist for " << n << ", value should be greater than 3" << endl;
        return 0;
    }

    // this represents 2D matrix of n x n, i.e., chess board
    vector<vector<char>> board(n, vector<char>(n, '-'));
    
    // initially we try to place first queen at 0th column
    // thats why in starting column will be 0
    int column = 0;

    cout << "\nPossible Solutions are: " << endl;
    nQueenSolve(board, column, n);
    return 0;
}