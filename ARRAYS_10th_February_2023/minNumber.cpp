#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 7, 6, 2, 3, 9, 4, 8, 12};
    int n = 10;

    int min = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "\nMinimum no. in an array is: " << min << endl;
    return 0;
}