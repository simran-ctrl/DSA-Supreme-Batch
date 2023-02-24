#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {58, 69, 21, 33, 74, 10, 9, 79};
    int n = 8;
    int target;

    cout << "\nEnter the element you want to search: ";
    cin >> target;

    int ans = linearSearch(arr, n, target);
    
    cout << endl;
    cout << target << " is at " << ans << " index" << endl;
    return 0;
}