#include <bits/stdc++.h>
using namespace std;

int solve(int n, int x, int y, int z) {
    // base case
    if (n == 0) {
        return 0;
    }
    if(n < 0) {
        return INT_MIN;
    }
    int ans1 = solve(n - x, x, y, z) + 1;
    int ans2 = solve(n - y, x, y, z) + 1;
    int ans3 = solve(n - z, x, y, z) + 1;
    int ans  = max(ans1, max(ans2, ans3));
    return ans;
}

int main() {
    int n = 11;              // length of the rod
    int x = 2, y = 3, z = 5; // given segments in which we have to cut the rod

    int ans = solve(n, x, y, z);

    if(ans < 0) {
        ans = 0;
    }

    cout << "\nMaximum segments in which we cut the rod is " << ans << endl;
    return 0;
} 