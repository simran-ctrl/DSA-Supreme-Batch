#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr(10, -2);

    // checking size of vector
    cout << "Current size is: " << arr.size() << endl;

    // checking capacity of vector
    cout << "Current capacity is: " << arr.capacity() << endl;

    // print vector
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}