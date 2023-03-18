// #include <bits/stdc++.h>
// using namespace std;

// void printCount(int n) {
//     //base case
//     if(n == 0) {
//         return;
//     }
//     cout << n << endl;
//     //recursive call --> tail recursion
//     printCount(n - 1);
// }

// int main() {
//     int n;
//     cout << "\nEnter number from which you want to print reverse counting: ";
//     cin >> n;

//     printCount(n);

//     cout << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void printCount(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }
    // recursive call --> head recursion
    printCount(n - 1);
    cout << n << endl;
}

int main()
{
    int n;
    cout << "\nEnter number from which you want to print reverse counting: ";
    cin >> n;

    printCount(n);

    cout << endl;
    return 0;
}