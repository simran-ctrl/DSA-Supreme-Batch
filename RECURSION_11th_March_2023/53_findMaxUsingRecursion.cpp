#include <iostream>
using namespace std;

void findMax(int arr[], int n, int &maxi, int i) {
    // base case
    if(i >= n) {
        return;
    }
    if(arr[i] > maxi) {
        maxi = arr[i];
    }
    findMax(arr, n, maxi, i + 1);
}

int main() {
    int arr[] = {10, 26, 41, 20, 39, 77, 88, 69};
    int n = 8;
    int i = 0;
    int maxi = INT_MIN;
    findMax(arr, n, maxi, i);
    cout << "\nMaximum Number is: " << maxi << endl;
    return 0;
}