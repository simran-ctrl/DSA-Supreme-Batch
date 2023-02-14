#include <iostream>
using namespace std;

int main()
{
    int arr[5][4] = {
                        {1, 2, 3, 4}, 
                        {2, 3, 4, 11},
                        {5, 6, 1, 3},
                        {2, 4, 6, 8},
                        {1, 9, 9, 7}
                    };
    int i, j;
    for(i = 0; i < 4; i++) {
        int sum = 0;
        for(j = 0; j < 5; j++) {
            sum = sum + arr[j][i];
        }
        cout << "\nColumn " << i << " sum is: " << sum;
        cout << endl;
    }
    return 0;
}