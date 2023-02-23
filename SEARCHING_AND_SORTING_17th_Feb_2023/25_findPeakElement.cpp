#include <iostream>
using namespace std;

// int main()
// {
//     //using basic and simple approach
//     int arr[] = {15, 85, 44, 36, 99, 88, 69};
//     int n = 7;

//     cout << "\nArray elements are: ";
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     if(arr[0] > arr[1]) {
//         cout << "\nPeak element is " << arr[0] << endl;
//     }

//     if(arr[n - 1] > arr[n - 2]) {
//         cout << "\nPeak element is " << arr[n - 1] << endl;
//     }

//     for(int i = 0; i < n; i++) {
//         if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
//             cout << "\nPeak element is " << arr[i] << endl;
//         }
//     }
//     return 0;
// }

int main()
{
    //using binary search approach
    int arr[] = {15, 185, 44, 136, 199, 88, 69};
    int n = 7;
    int start = 0, end = n - 1, mid;

    cout << "\nArray elements are: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    while(start < end) {
        mid = start + (end - start) / 2;
        if(arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        }
        else {
            end = mid;
        }
    }

    cout << "\n\nPeak element is " << arr[start] << endl;

    return 0;
}