#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5;
    int &b = a;

    cout << a << endl;
    cout << b << endl;

    a++;

    cout << a << endl;
    cout << b << endl;

    b++;

    cout << a << endl;
    cout << b << endl;

    int &c = b;
    c++;
    cout << c << endl;

    int d = 33;
    c = d;
    cout << c << endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n = 5;
//     int &r = n;

//     cout << n << endl;
//     cout << r << endl;

//     r = 50;

//     cout << n << endl;
//     cout << r << endl;

//     n = 100;

//     cout << n << endl;
//     cout << r << endl;

//     int &q = n;

//     r = q;

//     return 0;
// }