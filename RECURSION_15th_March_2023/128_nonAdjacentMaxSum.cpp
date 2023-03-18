#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n, int i, int sum, int &maxi) {
    // base case
    if(i >= n) {
        maxi = max(maxi, sum);
        return;
    }

    // include pattern
    solve(arr, n, i + 2, sum + arr[i], maxi);

    // exclude pattern
    solve(arr, n, i + 1, sum, maxi);
}

int main() {
    int arr[] = {1, 0, 3, 9, 2};
    int n = 5;
    int sum = 0;
    int maxi = INT_MIN;
    int i = 0;
    solve(arr, n, i, sum, maxi);
    cout << "\nMaximum sum in non adjacent elements are: " << maxi << endl;
    return 0;
}