#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target, int start, int end) {
    int mid;
    while(start <= end) {
        mid = start + (end - start) / 2;
        if(target == arr[mid]) {
            return mid;
        }
        else if(target < arr[mid]) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return -1;
}

int findPivot(int arr[], int n)
{
    int start = 0, end = n - 1, mid;
    
    while(start < end) {
        mid = start + (end - start) / 2;
        if((mid + 1) < n && arr[mid] > arr[mid + 1]) {
            return mid;
            break;
        }
        if((mid - 1) >= 0 && arr[mid] < arr[mid - 1]) {
            return mid - 1;
            break;
        }
        if(arr[start] > arr[mid]) {
            end = mid - 1;
        }
        else {
            start = mid;
        }
    }
    return start;
}

int search(int arr[], int n, int target) {

    int pivotElement = findPivot(arr, n);

    if(target >= arr[0] && target <= arr[pivotElement]) {
        //search in sorted 1 array
        int ans = binarySearch(arr, n, target, 0, pivotElement);
        return ans;
    }

    if(pivotElement + 1 < n && target >= arr[pivotElement + 1] && target <= arr[n - 1]) {
        //search in sorted 2 array
        int ans = binarySearch(arr, n, target, pivotElement + 1, n - 1);
        return ans;
    }
    return -1;
}

int main()
{
    int arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    int n = 9;
    int target = 3;

    int targetIndex = search(arr, n, target);
    if(targetIndex == -1) {
        cout << "\nElement does not exist in an array." << endl;
    }
    else {
        cout << endl;
        cout << target << " is at " << targetIndex << " index" << endl;
    }
    return 0;
}