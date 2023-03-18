#include <bits/stdc++.h>
using namespace std;

void printDigits(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }
    int newValue = n / 10;
    printDigits(newValue);
    int digit = n % 10;
    cout << endl;
    cout << digit << endl;
}

int main()
{
    int n = 0744;
    printDigits(n);
    return 0;
}