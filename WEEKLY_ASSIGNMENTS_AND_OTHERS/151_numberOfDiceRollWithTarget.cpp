#include <bits/stdc++.h>
using namespace std;

int numRollsToTarget(int n, int k, int target) {
    // base cases
    if(target < 0) {
        return 0;
    }
    if(n == 0 and target == 0) {
        return 1;
    }
    if(n == 0 and target != 0) {
        return 0;
    }
    if(n != 0 and target == 0) {
        return 0;
    }

    // 1 case solution
    int ans = 0;
    // this loop is because each time we have to check for each face of dice from 1 to k
    for(int i = 1; i <= k; i++) {
        // int way1 = 1 + numRollsToTarget(n - 1, k, target - 1);
        // int way2 = 2 + numRollsToTarget(n - 1, k, target - 2);
        ans += numRollsToTarget(n - 1, k, target - i);
    }
    // return way1 + way2;
    return ans;
}

int main() {
    // n --> total dices
    int n = 3;
    // k --> total faces of each dice
    int k = 6;
    // target --> sum we want to find
    int target = 15;
    cout << "\nTotal ways to find the target " << target << " with " << n << " dices of " << k << " faces are -> " << numRollsToTarget(n, k, target) << endl;
    return 0;
}