#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        //supposing ith index is the minimum index
        int minIndex = i;
        //run a loop from i + 1 index and search the minimum element in the rest of the array
        for(int j = i + 1; j < n; j++) {
            //if any element found which is smaller than first element then set minIndex to that element index
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        //check if ith index and minIndex both are not same then swap both elements
        if(i != minIndex) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

int main()
{
    int arr[] = {82, 42, 49, 8, 25, 52, 36, 93, 59};
    int n = 9;

    cout << "\nUnsorted Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    selectionSort(arr, n);

    cout << "\n\nSorted Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}