#include<iostream>
using namespace std;

int main()
{
    cout << endl;
    for(int row = 0; row < 4; row++)
    {
        for(int column = 0; column < 5; column++)
        {
            cout << "*   ";
        }
        cout << endl;
    }
    return 0;
}