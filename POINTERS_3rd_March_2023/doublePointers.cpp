#include <bits/stdc++.h>
using namespace std;

void changed(int *ptr)
{
    ptr = ptr + 1;
}

int main()
{
    int a = 5;
    int *p = &a;

    cout << "\nBefore function call: " << endl;
    cout << a << endl;
    cout << &a << endl;
    cout << *p << endl;

    changed(p);

    cout << "\nAfter function call: " << endl;
    cout << a << endl;
    cout << &a << endl;
    cout << *p << endl;
    return 0;
}