// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int a = 10;
//     int *p = &a;
//     cout << a << endl;
//     cout << p << endl;
//     cout << *p << endl;
//     (*p)++;
//     cout << *p << endl;
//     (*p)++;
//     cout << *p << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[] = {10, 15, 20, 25, 30};
//     for (int i = 0; i < 5; i++)
//     {
//         cout << "\nValue of arr: " << arr[i];
//         cout << "\nValue of arr: " << i[arr];
//         cout << "\nAddress of arr: " << &arr[i];
//     }
//     // cout << &arr << endl;
//     // cout << arr << endl;
//     // cout << &arr[0] << endl;
//     // cout << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10];
    cout << sizeof(arr) << endl;
    cout << sizeof(arr[0]) << endl;
    int *p = arr;
    cout << sizeof(p) << endl;
    cout << sizeof(*p) << endl;
    return 0;
}