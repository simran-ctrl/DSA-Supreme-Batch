#include <bits/stdc++.h>
using namespace std;

void solve(int arr[])
{
    cout << "\nsize of arr inside solve() function: " << sizeof(arr) << endl;
    cout << "\narr address: " << arr << endl;
    cout << "\n&arr address: " << &arr << endl;

    arr[0] = 50;
}

int main()
{
    int arr[10] = {14, 15, 20, 19, 69};

    cout << "\nsize of arr inside main() function: " << sizeof(arr) << endl;
    cout << "\narr address: " << arr << endl;
    cout << "\n&arr address: " << &arr << endl;

    // printing array
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << i[arr] << "  ";
    }
    cout << endl;
    cout << endl;
    cout << endl;

    cout << "\nnow calling solve() function....";

    solve(arr);

    cout << "\nback to main function...";

    // printing array
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << i[arr] << "  ";
    }
    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}