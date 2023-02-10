#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    // for(int r = 0; r < 4; r++) {
    //     if(r == 0 || r == 3) {
    //         for(int c = 0; c < 5; c++) {
    //             cout << "*  ";
    //         }
    //     }
    //     else {
    //         cout << "*  ";
    //         for(int c = 0; c < 3; c++) {
    //             cout << "   ";
    //         }
    //         cout << "*  ";
    //     }
    //     cout << endl;
    // }

    int rCount, cCount;
    cout << "\nEnter no. of rows = ";
    cin >> rCount;

    cout << "\nEnter no. of columns = ";
    cin >> cCount;

    for(int r = 0; r < rCount; r++) {
        if(r == 0 || r == rCount - 1) {
            for(int c = 0; c < cCount; c++) {
                cout << "*  ";
            }
        }
        else {
            cout << "*  ";
            for(int c = 0; c < cCount - 2; c++) {
                cout << "   ";
            }
            cout << "*  ";
        }
        cout << endl;
    }
    return 0;
}