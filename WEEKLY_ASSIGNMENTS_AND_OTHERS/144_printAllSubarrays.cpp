/* Using Iteration */
// #include <bits/stdc++.h>
// using namespace std;

// void printSubArray(int arr[], int n) {
//     // Pick starting point
//     for (int i = 0; i < n; i++)
//     {
//         // Pick ending point
//         for (int j = i; j < n; j++)
//         {
//             // Print subarray between current starting
//             // and ending points
//             for (int k = i; k <= j; k++) {
//                 cout << arr[k] << " ";
//             }
//             cout << endl;
//         }
//     }
// }

// int main() {
//     int arr[] = {45, 78, 96, 14, 69, 22, 75};
//     int n = 7;
//     printSubArray(arr, n);
//     return 0;
// }


/* Using Recursion */
#include <bits/stdc++.h>
using namespace std;

void printSubArray(int arr[], int n, int start, int end) {
    // base case
    if(end == n) {
        return;
    }
    // 1 case solution
    for(int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    // recursive call
    printSubArray(arr, n, start, end + 1);
}

void printSubArrayUtil(int arr[], int n) {
    for(int start = 0; start < n; start++) {
        int end = start;
        printSubArray(arr, n, start, end);
    }
}

int main() {
    int arr[] = {45, 78, 96, 14, 69, 22, 75};
    int n = 7;
    printSubArrayUtil(arr, n);
    return 0;
}