#include <iostream>
#include <algorithm>
using namespace std;

int firstOccurrence(int arr[], int n, int k) {
    int start = 0;
    int end = n - 1;
    int mid, ans = -1;
    while(start <= end) {
        mid = (start + end) / 2;
        if(k == arr[mid]) {
            ans = mid;
            end = mid - 1;
        }
        else {
            if(k > arr[mid]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
    }
    return ans;
}

int lastOccurrence(int arr[], int n, int k) {
    int start = 0;
    int end = n - 1;
    int mid, ans = -1;
    while(start <= end) {
        mid = (start + end) / 2;
        if(k == arr[mid]) {
            ans = mid;
            start = mid + 1;
        }
        else {
            if(k > arr[mid]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
    }
    return ans;
}

int main()
{
    int arr[] = {1, 3, 4, 4, 4, 4, 4, 6, 6, 6, 7, 9, 9};
    int n = 13;
    int k = 4;
    auto firstAns = firstOccurrence(arr, n, k);
    auto lastAns = lastOccurrence(arr, n, k);
    int totalAns = lastAns - firstAns + 1;
    cout << "\nTotal occurrence of " << k << " in arrays is: " << totalAns << endl;
    return 0;
}