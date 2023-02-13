#include <iostream>
using namespace std;

int main()
{
    int arr[] = {15, 58, 22, 10, 6, 69, 36, 47};
    int n = 8;
    int i, search, flag = 0;
    cout << "\nEnter the element you want to find: ";
    cin >> search;
    for(i = 0; i < n; i++) {
        if(arr[i] == search) {
            flag = 1;
            break;
        }
        else {
            flag = 0;
        }
    }

    if(flag == 1) {
        cout << "\nElement found at " << i + 1 << " Position." << endl;;
    }
    else{
        cout << "\nElement not found." << endl;
    }
    return 0;
}