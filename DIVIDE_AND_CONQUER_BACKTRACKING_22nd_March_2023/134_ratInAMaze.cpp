/* BACKTRACKING PROBLEM 2 - RAT IN A MAZE */

#include <bits/stdc++.h>
using namespace std;

bool isSafe(int x, int y, int rows, int columns, int arr[][4], vector<vector<bool>> &visited) {
    // going to the particular cell is safe if it satisfies all the 3 conditions, i.e.,
    // 1 --> if we are in bound of the matrix
    // 2 --> if there is a 1 present at that location in the original array
    // 3 --> if there is a False value in visited array
    // always check in bound condition before visited condition otherwise it will not give an output
    if (((x >= 0 && x < rows) && (y >= 0 && y < columns)) &&
         (arr[x][y] == 1) && 
         (visited[x][y] == 0)) {
        return true;
    }
    else {
        return false;
    }
}

void solveMaze(int arr[4][4], int rows, int columns, int i, int j, vector<vector<bool>> &visited, vector<string> &path, string output) {
    // base case
    if(i == rows - 1 && j == columns - 1) {
        // answer found & we store the output string value in the path vector
        path.push_back(output);
        return; // return to find the new path
    }

    // now we solve 1 case for each direction and rest recursive call will take care
    // down direction --> means (i + 1, j)
    // before going down direction we check that going downwards is safe or not, i.e.,
    // we are safe if there is a False value in visited array & 
    // we are safe if we are in bound of the matrix
    // we are safe if there is a 1 present at that location in the original array
    if(isSafe(i + 1, j, rows, columns, arr, visited)) {
        // if going downward direction is safe then we first mark that position True in the visited array
        visited[i + 1][j] = true;
        
        // after mark visited we go on that path, means we recursive call for that cell & we are going Down direction so we concatenate 'D' in output string
        solveMaze(arr, rows, columns, i + 1, j, visited, path, output + 'D');

        // after coming from recursive call, we do Backtracking so we mark the same visited cell as False for finding more paths
        visited[i + 1][j] = false;
    }

    // left direction --> means (i, j - 1)
    // before going left direction we check that going leftwards is safe or not, i.e.,
    // we are safe if there is a False value in visited array & 
    // we are safe if we are in bound of the matrix
    // we are safe if there is a 1 present at that location in the original array
    if(isSafe(i, j - 1, rows, columns, arr, visited)) {
        // if going leftward direction is safe then we first mark that position True in the visited array
        visited[i][j - 1] = true;
        
        // after mark visited we go on that path, means we recursive call for that cell & we are going Left direction so we concatenate 'L' in output string
        solveMaze(arr, rows, columns, i, j - 1, visited, path, output + 'L');

        // after coming from recursive call, we do Backtracking so we mark the same visited cell as False for finding more paths
        visited[i][j - 1] = false;
    }


    // right direction --> means (i, j + 1)
    // before going right direction we check that going rightwards is safe or not, i.e.,
    // we are safe if there is a False value in visited array & 
    // we are safe if we are in bound of the matrix
    // we are safe if there is a 1 present at that location in the original array
    if(isSafe(i, j + 1, rows, columns, arr, visited)) {
        // if going rightward direction is safe then we first mark that position True in the visited array
        visited[i][j + 1] = true;
        
        // after mark visited we go on that path, means we recursive call for that cell & we are going Right direction so we concatenate 'R' in output string
        solveMaze(arr, rows, columns, i, j + 1, visited, path, output + 'R');

        // after coming from recursive call, we do Backtracking so we mark the same visited cell as False for finding more paths
        visited[i][j + 1] = false;
    }


    // up direction --> means (i - 1, j)
    // before going up direction we check that going upwards is safe or not, i.e.,
    // we are safe if there is a False value in visited array & 
    // we are safe if we are in bound of the matrix
    // we are safe if there is a 1 present at that location in the original array
    if(isSafe(i - 1, j, rows, columns, arr, visited)) {
        // if going upward direction is safe then we first mark that position True in the visited array
        visited[i - 1][j] = true;
        
        // after mark visited we go on that path, means we recursive call for that cell & we are going Up direction so we concatenate 'U' in output string
        solveMaze(arr, rows, columns, i, j - 1, visited, path, output + 'U');

        // after coming from recursive call, we do Backtracking so we mark the same visited cell as False for finding more paths
        visited[i - 1][j] = false;
    }
}

int main() {
    // below array is representing a maze in which Rat will traverse from source to destination
    int arr[4][4] = { {1, 0, 0, 0},
                      {1, 1, 0, 0},
                      {1, 1, 0, 0},
                      {0, 1, 1, 1}
                    };

    // rows and columns in our maze
    int rows = 4;
    int columns = 4;

    // visited array which will help us to identify whether the position is visited or not and save us from infinite loop
    // below is the 2D array and all the values are False by default
    vector<vector<bool>> visited(rows, vector<bool>(columns, false));

    // source value is true initially because rat is standing on the source value
    visited[0][0] = true;

    // this string vector will store all the possible paths
    vector<string> path;

    // below string will store the path in it and at the end push the path in the string vector and store the next path
    string output = "";

    // calling the function which will give us our path
    // we've passed out original array --> Maze
    // rows and columns of the array --> 4 x 4
    // starting position of the rat --> arr[0][0]
    // visited bool array which will save us from infinite loop situation
    // path vector which will save our all possible paths
    // output string will store the path in it and at the end push the path in the string vector and store the next path
    solveMaze(arr, rows, columns, 0, 0, visited, path, output);

    // printing all the possible paths
    cout << "\nAll the possible paths from source to destination are: ";
    for(auto i : path) {
        cout << i << "  ";
    }

    cout << endl;
    return 0;
}