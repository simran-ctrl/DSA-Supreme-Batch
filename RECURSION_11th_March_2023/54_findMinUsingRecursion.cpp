#include <bits/stdc++.h>
using namespace std;

void findMini(int arr[], int n, int &mini, int i) {
    // base case
    if(i >= n) {
        return;
    }
    if(arr[i] < mini) {
        mini = arr[i];
    }
    findMini(arr, n, mini, i + 1);
}

int main() {
    int arr[] = {10, 26, 41, 20, 3, 77, 88, 69};
    int n = 8;
    int i = 0;
    int mini = INT_MAX;
    findMini(arr, n, mini, i);
    cout << "\nMinimum Number is: " << mini << endl;
    return 0;
}