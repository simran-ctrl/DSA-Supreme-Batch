#include <iostream>
using namespace std;

bool binarySearch(int arr[][4], int rows, int columns, int target) {
    int start = 0;
    int end = (rows * columns) - 1;
    int mid;

    while (start <= end) {
        mid = start + (end - start) / 2;
        int rowIndex = mid / columns;
        int columnIndex = mid % columns;

        if(target == arr[rowIndex][columnIndex]) {
            cout << "\nFound at " << rowIndex << ", " << columnIndex << " Index" << endl;
            return true;
        }
        else {
            if(target < arr[rowIndex][columnIndex]) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
    }
    return false;
}

int main()
{
    int arr[5][4] = {
                        {110, 120, 130, 140},
                        {150, 160, 170, 180},
                        {190, 200, 210, 220},
                        {230, 240, 250, 260},
                        {270, 280, 290, 300}
                    };

    int rows = 5;
    int columns = 4;

    int target;
    cout << "\nEnter which element you want to search: ";
    cin >> target;

    bool ans = binarySearch(arr, rows, columns, target);

    if(ans) {
        cout << "\nElement Found" << endl;
    }
    else {
        cout << "\nElement Not Found" << endl;
    }
    return 0;
}