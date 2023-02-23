#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target) {
    int start = 0;
    int end = arr.size() - 1;
    int mid;
    while(start <= end) {
        mid = (start + end) / 2;
        if(target == arr[mid]) {
            return mid;
        }
        if(mid - 1 >= 0 && target == arr[mid - 1]) {
            return mid - 1;
        }
        if(mid + 1 < arr.size() && target == arr[mid + 1]) {
            return mid + 1;
        }
        if(target < arr[mid]) {
            //search in left array
            end = mid - 2;
        }
        if(target > arr[mid]) {
            //search in right array
            start = mid + 2;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr{10, 3, 40, 20, 50, 80, 70};
    int target;
    cout << "\nEnter a element you want to search: ";
    cin >> target;
    
    int ans = binarySearch(arr, target);

    if(ans == -1) {
        cout << "\nElement not present" << endl;
    }
    else {
        cout << "\nElement " << target << " is present at " << ans << " index" << endl;
    }
    return 0;
}