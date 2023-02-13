#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 1, 7, 6, 2, 3, 9, 4, 8, 12};
    int n = 10;

    int max = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "\nMaximum no. in an array is: " << max << endl;
    return 0;
}