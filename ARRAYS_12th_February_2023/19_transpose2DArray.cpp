/* Transpose means Rows becomes Columns & Columns becomes Rows */

#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {
                        {10, 12, 13},
                        {15, 16, 17},
                        {19, 80, 21}
                    };

    
    int brr[3][3];

    //row-wise print
    cout << "\nYour current array is: " << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }

    //inserting old matrix row in new matrix column
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            brr[j][i] = arr[i][j];
        }
    }

    cout << "\nArray after transpose: " << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << brr[i][j] << "  ";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}