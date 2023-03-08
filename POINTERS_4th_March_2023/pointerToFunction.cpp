#include <bits/stdc++.h>
using namespace std;

void findSize(int arr[])
{
    cout << "\nSize of array inside findSize() function: " << sizeof(arr) << endl;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    cout << "\nSize of array inside main() function: " << sizeof(arr) << endl;

    findSize(arr);

    return 0;
}