#include <iostream>
using namespace std;

int main()
{
    int arr[5][4] = {
                        {1, 2, 3, 4}, //Sum = 10 
                        {2, 3, 4, 11}, //Sum = 20
                        {5, 6, 1, 3}, //Sum = 15
                        {2, 4, 6, 8}, //Sum = 20
                        {1, 9, 9, 7}  //Sum = 26
                    };

    for(int i = 0; i < 5; i++) {
        int sum = 0;
        for(int j = 0; j < 4; j++) {
            sum = sum + arr[i][j];
        }
        cout << "\nRow " << i << " sum is: " << sum;
        cout << endl;
    }
    return 0;
}