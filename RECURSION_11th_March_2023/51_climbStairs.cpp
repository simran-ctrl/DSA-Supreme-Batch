#include <bits/stdc++.h>
using namespace std;

int climbStairs(int n) {
    if(n == 0) {
        return 1;
    }
    if(n == 1) {
        return 1;
    }
    int ans = climbStairs(n - 1) + climbStairs(n - 2);
    return ans;
}

int main() {
    int n;
    cout << "\nEnter the no. of stairs you want to climb from stair 0th: ";
    cin >> n;

    int ans = climbStairs(n);
    cout << "\nNo. of ways to climb " << n << " stairs from 0th stair are " << ans << endl;
    return 0;
}