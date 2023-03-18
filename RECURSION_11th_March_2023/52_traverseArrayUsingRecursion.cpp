#include <bits/stdc++.h>
using namespace std;

// using recursion --> recursive approach
void printArray(int arr[], int n, int i) {
    // base case
    if(i >= n) {
        return;
    }
    cout << arr[i] << " ";
    printArray(arr, n, i + 1);
}

// // using iteration method --> for loop
// void printArray(int arr[], int n) {
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
// }

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    int i = 0;
    
    // // for iterative call
    // printArray(arr, n);

    //for recursive call
    printArray(arr, n, i);
    return 0;
}