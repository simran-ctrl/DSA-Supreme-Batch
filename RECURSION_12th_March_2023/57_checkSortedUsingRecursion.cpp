#include <bits/stdc++.h>
using namespace std;

bool checkSorted(int arr[], int &n, int i)
{
    // base case
    if (i >= n)
    {
        return true;
    }
    if (arr[i + 1] < arr[i])
    {
        return false;
    }
    return checkSorted(arr, n, i + 1);
}

int main()
{
    int arr[] = {2, 3, 4, 5, 6, 8};
    int n = 6;
    int i = 0;
    bool isSorted = checkSorted(arr, n, i);
    if (isSorted)
    {
        cout << "\nArray is sorted." << endl;
    }
    else
    {
        cout << "\nArray is not sorted." << endl;
    }
    return 0;
}