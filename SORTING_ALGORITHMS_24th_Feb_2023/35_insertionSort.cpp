#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
}

int main()
{
    int arr[] = {5, 23, 18, 9, 4, 10, 69};
    int n = 7;

    cout << "\nUnsorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    insertionSort(arr, n);

    cout << "\n\nSorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}

/* C Program to sort an array in ascending order using Insertion Sort */
// #include <stdio.h>
// int main()
// {
//     int arr[6] = {7, 1, 23, 4, 19, 28};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int i, j, temp;

//     printf("\nBefore Inserion Sort: ");
//     for (i = 0; i <= 6 - 1; i++)
//     {
//         printf(" %d ", arr[i]);
//     }
//     for (i = 0 ; i < 6; i++)
//     {
// 	    j = i + 1;
//             while( j > 0 && arr[j-1] > arr[j])
//             {
//                 temp     = arr[j];
//                 arr[j]   = arr[j-1];
//                 arr[j-1] = temp;
//                 j--;
//             }
//     }
//     printf("\n\nAfter Insertion Sort: ");
//     for (i = 0; i < 6; i++)
//     {
//         printf(" %d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }