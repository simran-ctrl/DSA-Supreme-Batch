#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 0, 1, 1};

    int start = 0;
    int end = arr.size() - 1;
    int i = 0;

    //printing array before sorting
    cout << endl;
    for(int a = 0; a < arr.size(); a++) {
        cout << arr[a] << " ";
    }

    while(start <= end) {
        if(arr[i] == 0) {
            swap(arr[i], arr[start]);
            i++;
            start++;
        }
        if(arr[i] == 1) {
            swap(arr[i], arr[end]);
            /*i is not increment because after swapping with arr[end], i got a new value so we have to check again that i has 1 or 0
                so we have to process new value of i again*/
            //i++;
            end--;
        }
    }

    //printing array after sorting
    cout << endl;
    cout << endl;
    for(int a = 0; a < arr.size(); a++) {
        cout << arr[a] << " ";
    }

    cout << endl;
    return 0;
}