#include <iostream>
using namespace std;

int main()
{
    int arr[5][4] = {
                        {10, 12, 13, 14},
                        {15, 16, 17, 18},
                        {19, 20, 21, 22},
                        {23, 24, 25, 26},
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

    int n;
    cout << "\nEnter the element you want to search is this arrays: ";
    cin >> n;

    int flag = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 4; j++) {
            if(arr[i][j] == n) {
                flag = 1;
                break;
            }
        }
    }

    if(flag == 1){
        cout << "\nElement found.";
    }
    else {
        cout << "\nElement not found.";
    }

    cout << endl;
    return 0;
}