#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int ans = n * fact(n - 1); // Tail Recursion
    return ans;
}

int main()
{
    int n;
    cout << "\nEnter the number you want to find the factorial of: ";
    cin >> n;

    int ans = fact(n);

    cout << "\nFactorial of " << n << " is: " << ans << endl;

    return 0;
}