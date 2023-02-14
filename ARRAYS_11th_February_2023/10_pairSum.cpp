#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{10, 20, 30, 40, 50, 60, 70};
    int sum = 80;

    //outer loop for picking up 1 element at a time
    for(int i = 0; i < arr.size(); i++) {
        //inner loop for making first element pair with rest of the right side elements
        for(int j = i + 1; j < arr.size(); j++) {
            if(arr[i] + arr[j] == sum) {
                cout << "\nPair: (" << arr[i] << ", " << arr[j] << ")" << " makes " << sum << endl;
                //cout << "Pair found: " << arr[i] << ", " << arr[j] << endl;
            }
        }
    }

    //logic to find & print every pair in array
    // int k = 1;
    // for(int i = 0; i < arr.size(); i++) {
    //     //inner loop for making first element pair with rest of the right side elements
    //     for(int j = i + 1; j < arr.size(); j++) {
    //             cout << "Pair " << k << ": (" << arr[i] << ", " << arr[j] << ")" << endl;
    //             k++;
    //     }
    // }
    return 0;
}
