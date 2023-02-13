#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0};
    int n = 19;

    int numZero = 0, numOne = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            numZero++;
        }
        if(arr[i] == 1) {
            numOne++;
        }
    }

    cout << "\nNumber of 0's are: " << numZero << endl;
    cout << "\nNumber of 1's are: " << numOne << endl;
    return 0;
}