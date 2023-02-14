#include <iostream>
using namespace std;

int main()
{
    int arr[5][4] = {
                        {8, 12, 13, 14},
                        {15, 16, 17, 18},
                        {19, 80, 21, 22},
                        {23, 24, 99, 26},
                        {27, 28, 29, 30} 
                    };

    //row-wise print
    cout << "\nYour current array is: " << endl;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 4; j++) {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }

    int max = INT_MIN;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 4; j++) {
            if(arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    int min = INT_MAX;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 4; j++) {
            if(arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }

    cout << "\nMinimum element in array is: " << min << endl;
    cout << "\nMaximum element in array is: " << max << endl;
    return 0;
}