#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int n, int start, int end) {

    // calculating mid so that we create temporary arrays
    int mid = (start + end) / 2;

    // finding length of temporary arrays
    int len1 = mid - start + 1;
    int len2 = end - mid;

    // creating two temporary arrays
    int *firstArray = new int[len1];
    int *secondArray = new int[len2];

    int k = start;
    for (int i = 0; i < len1; i++) {
        firstArray[i] = arr[k];
        k++;
    }

    k = mid + 1;
    for(int i = 0; i < len2; i++) {
        secondArray[i] = arr[k];
        k++;
    }

    // merging two arrays
    int leftIndex = 0;
    int rightIndex = 0;
    int mainIndex = start;

    // checking both the temporary array & whichever element is smaller, we push that element in the main array
    while(leftIndex < len1 && rightIndex < len2) {
        if(firstArray[leftIndex] < secondArray[rightIndex]) {
            arr[mainIndex] = firstArray[leftIndex];
            mainIndex++;
            leftIndex++;
        }
        else {
            arr[mainIndex] = secondArray[rightIndex];
            mainIndex++;
            rightIndex++;
        }
    }

    // if one of the temporary array is finished, then we pushed the other arrays remaining element in the main array
    while(leftIndex < len1) {
        arr[mainIndex] = firstArray[leftIndex];
        mainIndex++;
        leftIndex++;
    }

    while(rightIndex < len2) {
        arr[mainIndex] = secondArray[rightIndex];
        mainIndex++;
        rightIndex++;
    }
}

void mergeSort(int arr[], int n, int start, int end) {
    
    // if start index is greater than end index means invalid array & if start index is equal to end index means we have single element left
    if(start >= end) {
        return;
    }

    // calculating mid
    int mid = (start + end) / 2;
    
    // left array
    mergeSort(arr, n, start, mid);

    // right array
    mergeSort(arr, n, mid + 1, end);

    // sorting part
    merge(arr, n, start, end);
}

int main() {
    int arr[] = {45, 78, 15, 36, 85, 96, 69, 47, 12, 10, 2, 5, 8, 1, 33, 74};
    int n = 16, start = 0, end = n - 1;

    cout << "\nArray before sorting: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // calling mergeSort() function for dividing the array
    mergeSort(arr, n, start, end);

    cout << "\nArray after sorting: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}