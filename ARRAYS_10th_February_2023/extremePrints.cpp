// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int n = 10;

//     cout << "\nOriginal Array: ";
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     cout << "\nExtreme Prints: ";
//     for(int i = 0, j = n - 1; i < j; i++, j--) {
//         cout << arr[i] << " " << arr[j] << " ";
//     }
//     cout << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int n = 11;

    cout << "\nOriginal Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    int i = 0, j = n - 1;
    cout << "\nExtreme Prints: ";
    while(i <= j) {
        if(i == j) {
            cout << arr[i] << " ";
        }
        else {
            cout << arr[i] << " " << arr[j] << " ";
        }
        i++;
        j--;
    }
    cout << endl;
    return 0;
}