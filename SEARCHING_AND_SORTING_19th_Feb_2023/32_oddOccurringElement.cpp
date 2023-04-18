#include <iostream>
using namespace std;

// //Linear Search Approach using XOR Operator
// int oddOccurrence(int arr[], int n) {
//     int ans = 0;
//     for(int i = 0; i < n; i++) {
//         ans = ans ^ arr[i];
//     }
//     return ans;
// }

int oddOccurrence(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    int mid;

    while(start <= end) {
        mid = (start + end) / 2;
        if(start == end) {
            //single element left in array
            return start;
        }
        if(mid % 2 == 0) {
            if(arr[mid] == arr[mid + 1]) {
                start = mid + 2;
            }
            else {
                end = mid;
            }
        }
        else {
            if(arr[mid] == arr[mid - 1]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        mid=s+(e-s)/2;    }
    return -1;
}

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 3, 600, 600, 4, 4, 4, 3, 3};
    int n = 13;
    int ans = oddOccurrence(arr, n);
    cout << "\nIndex of element that occurs odd number of time are: " << ans << endl;
    cout << "\nThe element that occurs odd number of time are: " << arr[ans] << endl;
    cout << endl;
    return 0;
}
