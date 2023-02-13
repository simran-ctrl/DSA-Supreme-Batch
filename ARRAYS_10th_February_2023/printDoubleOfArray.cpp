#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 5, 7, 9};

    //printing original array
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    //printing doubles
    cout << "\nDoubles are: ";
    for(int i = 0; i < 5; i++) {
        cout << 2 * arr[i] << " ";
    }
    return 0;
}