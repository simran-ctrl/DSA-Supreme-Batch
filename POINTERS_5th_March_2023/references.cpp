#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5;
    int &b = a;
    int c = a;
    cout << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    a++;
    cout << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    b++;
    cout << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
}