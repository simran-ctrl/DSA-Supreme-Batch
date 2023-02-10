#include <iostream>
using namespace std;

int main()
{
    int rCount;
    cout << "\nEnter no. of rows = ";
    cin >> rCount;
    for(int r = 0; r < rCount; r++) {
        for(int c = 0; c < rCount - r; c++) {
            cout << c + 1;
        }
        cout << endl;
    }
    return 0;
}