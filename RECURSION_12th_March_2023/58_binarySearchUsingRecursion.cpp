#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int key, int start, int end)
{
    // base case 1 --> if start > end means element not found
    if (start > end)
    {
        return -1;
    }
    // base case 2 --> if arr[mid] == key means key found
    int mid = (start + end) / 2;
    if (key == arr[mid])
    {
        return mid;
    }
    else
    {
        // ternary operator
        return (key < arr[mid]) ? binarySearch(arr, key, start, mid - 1) : binarySearch(arr, key, mid + 1, end);
    }

    // if (key < arr[mid])
    // {
    //     return binarySearch(arr, key, start, mid - 1);
    // }
    // else
    // {
    //     return binarySearch(arr, key, mid + 1, end);
    // }
}

int main()
{
    vector<int> arr{10, 15, 20, 26, 39, 44, 57, 69, 74, 88};
    int key;
    cout << "\nEnter the key you want to search: ";
    cin >> key;
    int n = arr.size();
    int start = 0, end = n - 1;
    int ans = binarySearch(arr, key, start, end);
    if (ans == -1)
    {
        cout << "\nValue not found." << endl;
    }
    else
    {
        cout << "\nValue found at " << ans << " index." << endl;
    }
    return 0;
}