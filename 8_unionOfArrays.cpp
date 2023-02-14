#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //array 1
    int arr1[] = {1, 3, 5, 7, 9};
    int n1 = 5;

    //array 2
    int arr2[] = {2, 4, 6, 8};
    int n2 = 4;

    //creating a vector
    vector<int> ans;

    //copying elements of arr1 to ans vector
    for(int i = 0; i < n1; i++) {
        ans.push_back(arr1[i]);
    }

    //copying elements of arr2 to ans vector
    for(int i = 0; i < n2; i++) {
        ans.push_back(arr2[i]);
    }

    //printing vector
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    
    return 0;
}