#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{10, 20, 30, 40, 50, 60, 70};
    int sum = 90;

    //outer loop for picking up 1 element at a time
    for(int i = 0; i < arr.size(); i++) {
        //inner loop for picking up 2nd element at a time
        for(int j = i + 1; j < arr.size(); j++) {
            //inner loop for making 1st element & 2nd element, and start with 3rd element, make triplet with rest of the right side elements
            for(int k = j + 1; k < arr.size(); k++) {
                //if any 3 elements sum is equal to given sum then we print the sum
                if(arr[i] + arr[j] + arr[k] == sum) {
                    cout << "\nPair: (" << arr[i] << ", " << arr[j] << ", " << arr[k] << ")" << " makes " << sum << endl;
                    //cout << "Pair found: " << arr[i] << ", " << arr[j] << endl;
                }
            }
        }
    }

    // //logic to find & print every triplet in array
    // int x = 1;
    // //outer loop for picking up 1st element at a time
    // for(int i = 0; i < arr.size(); i++) {
    //     //inner loop for picking up 2nd element at a time
    //     for(int j = i + 1; j < arr.size(); j++) {
    //         //inner loop for making 1st element & 2nd element pair with rest of the right side elements
    //         for(int k = j + 1; k < arr.size(); k++) {
    //             cout << "Triplet " << x << ": (" << arr[i] << ", " << arr[j] << ", " << arr[k] << ")" << endl;
    //             x++;
    //         }
    //     }
    // }
    return 0;
}
