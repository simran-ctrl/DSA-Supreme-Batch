#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 4, 5, 6, 7, 1, 2};
    int n = 7;

    int start = 0, end = n - 1, mid;
    
    while(start <= end) {
        mid = start + (end - start) / 2;
        if((mid + 1) < n && arr[mid] > arr[mid + 1]) {
            cout << arr[mid];
            break;
        }
        if((mid - 1) >= 0 && arr[mid] < arr[mid - 1]) {
            cout << arr[mid - 1];
            break;
        }
        if(arr[start] > arr[mid]) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return 0;
}