#include <bits/stdc++.h>
using namespace std;

int fib(int n) {
    //base case
    if(n == 1) {
        return 0;
    }
    if(n == 2) {
        return 1;
    }
    int ans = fib(n-1) + fib(n-2);
    return ans;
}

int main() {
    int n;
    cout << "\nEnter which fibonacci term you want to check: ";
    cin >> n;

    int ans = fib(n);
    cout << endl;
    cout << n << " term of fibonacci series is " << ans << endl;
    return 0;
}