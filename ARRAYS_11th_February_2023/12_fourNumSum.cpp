#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{10, 20, 30, 40, 50, 60, 70, 80};
    int sum = 190;

    //outer loop for picking up 1 element at a time
    for(int i = 0; i < arr.size(); i++) {
        //inner loop for picking up 2nd element at a time
        for(int j = i + 1; j < arr.size(); j++) {
            //inner loop for picking up 3rd element at a time
            for(int k = j + 1; k < arr.size(); k++) {
                //inner loop for making 1st element & 2nd element & 3rd element, and start with 4th element, make four with rest of the right side elements
                for(int l = k + 1; l < arr.size(); l++) {
                    //if any 3 elements sum is equal to given sum then we print the sum
                    if(arr[i] + arr[j] + arr[k] + arr[l] == sum) {
                        cout << "\nFour elements: (" << arr[i] << ", " << arr[j] << ", " << arr[k] << ", " << arr[l] << ")" << " makes " << sum << endl;
                        //cout << "Pair found: " << arr[i] << ", " << arr[j] << endl;
                    }   
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
    //         //inner loop for picking up 3rd element at a time
    //         for(int k = j + 1; k < arr.size(); k++) {
    //             //inner loop for making 1st element & 2nd element & 3rd element, and start with 4th element, make four with rest of the right side elements
    //             for(int l = k + 1; l < arr.size(); l++) {
    //                 cout << "No" << x << " are: (" << arr[i] << ", " << arr[j] << ", " << arr[k] << ", " << arr[l] << ")" << endl;
    //                 x++;
    //             }
    //         }
    //     }
    // }
    return 0;
}
