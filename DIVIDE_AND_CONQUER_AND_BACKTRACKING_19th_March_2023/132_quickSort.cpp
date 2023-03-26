#include <bits/stdc++.h>
using namespace std;

void quickSort(int arr[], int start, int end)
{
    int i, j, pivot;

    if(start < end)
    {
        pivot = start;
        i = start;
        j = end;

        while(i < j)
        {
            while(arr[i] <= arr[pivot])
            {
                i++;
            }
            while(arr[j] > arr[pivot])
            {
                j--;
            }
            if(i < j)
            {
                swap(arr[i], arr[j]);
            }
        }

        swap(arr[j], arr[pivot]);

        quickSort(arr, start, j - 1);
        quickSort(arr, j + 1, end);
    }
}

int main()
{
    int arr[] = {5, 7, 5, 0, 3, 8, 10};
    int n = 7;

    cout << "\nArray before sorting: ";
    for(auto i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    quickSort(arr, 0, n - 1);

    cout << "\n\nArray after sorting: ";
    for(auto i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";
    return  0;
}
