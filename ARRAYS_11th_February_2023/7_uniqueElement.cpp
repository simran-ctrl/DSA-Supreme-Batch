#include <iostream>
#include <vector>
using namespace std;

void findUnique(vector<int> arr) {
    
    //ans variable and initialize it with 0 to perform XOR operation
    int ans = 0;

    //perform XOR operation of ans variable and array element
    for(int i = 0; i < arr.size(); i++) {
        ans = ans ^ arr[i];
    }

    cout << "\n\nUnique element in given array is: " << ans << endl;
}

int main()
{
    //taking the size of the vector
    int n;
    cout << "\nEnter the size of the array: ";
    cin >> n;

    //declaring the vector of n size
    vector<int> arr(n);

    //taking input for vector
    cout << "\nEnter elements: ";
    for(int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }

    //printing the array
    cout << "\nEntered elements are: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    //calling the function to find unique element
    findUnique(arr);

    return 0;
}