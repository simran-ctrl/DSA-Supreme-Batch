#include <bits/stdc++.h>
using namespace std;

int numSquareHelper(int n) {
    // base case
    if(n == 0) {
        return 1;
    }
    if(n < 0) {
        return 0;
    }
    // 1 case solution and recursive call
    int ans = INT_MAX;
    int i = 1;
    int end = sqrt(n);
    while(i <= end) {
        int perfectSquare = i * i;
        int numberOfPerfectSquares = 1 + numSquareHelper(n - perfectSquare);
        if(numberOfPerfectSquares < ans) {
            ans = numberOfPerfectSquares;
        }
        i++;
    }
    return ans;
}

int numSquares(int n) {
    int finalAns = numSquareHelper(n) - 1;
    return finalAns;
}

int main() {
    int n = 12;
    cout << endl << numSquares(n) << endl;
    return 0;
}