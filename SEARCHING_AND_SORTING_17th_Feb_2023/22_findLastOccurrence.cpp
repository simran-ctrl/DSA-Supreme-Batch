#include <iostream>
using namespace std;

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
    int k = 9;
    int ans = lastOccurrence(arr, n, k);

    if(ans == -1) {
        cout << "\nElement not found." << endl;
    }
    else {
        cout << "\nLast Occurrence of " << k << " is at " << ans << " index." << endl;
    }
    
    return 0;
}