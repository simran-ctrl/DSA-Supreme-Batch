#include <bits/stdc++.h>
using namespace std;

int rob(vector<int> &arr, int i) {
    // base case
    if(i >= arr.size()) {
        return 0;
    }

    // 1 case solution and recursive call
    int robAmt1 = arr[i] + rob(arr, i + 2);
    int robAmt2 = 0 + rob(arr, i + 1);

    return max(robAmt1, robAmt2);
}  

int main() {
    vector<int> arr{2, 1, 1, 2};
    cout << "\nMaximum profit by rob adjacent houses are: " << rob(arr, 0) << endl;
    return 0;
}