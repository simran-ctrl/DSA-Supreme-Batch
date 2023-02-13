#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;

    cout << "\nArray before swapping: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    int i = 0, j = n - 1;
    while(i <= j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    cout << "\n\nArray after swapping: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}