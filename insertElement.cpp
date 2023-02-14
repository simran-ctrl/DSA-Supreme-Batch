#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //declare vector
    vector<int> arr;

    //inserting elements into vector
    arr.push_back(30);
    arr.push_back(20);
    arr.push_back(50);
    arr.push_back(110);
    arr.push_back(60);

    //print vector
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    //removing elements from vector
    arr.pop_back();
    arr.pop_back();

    //print vector
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}