#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {15, 19, 25, 36, 47, 51, 69, 74, 89, 99};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array is: ";
    for(int i = 0; i < n;  i++) {
        cout << arr[i] << " ";
    }

    int searchItem, flag = 0;
    cout << "\nEnter element you want to search = ";
    cin >> searchItem;
    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (searchItem == arr[mid])
        {
            flag = 1;
            break;
        }
        else {
            if(searchItem < arr[mid]) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
    }
    if(flag == 1) {
        cout << "\nElement found.";
    }
    else {
        cout << "Element not found";
    }
    return 0;
}