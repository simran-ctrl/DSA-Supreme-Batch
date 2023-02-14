#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // array 1
    int arr1[] = {1, 2, 3, 4, 6, 8};
    int n1 = 6;

    // array 2
    int arr2[] = {3, 4, 9, 10};
    int n2 = 4;

    vector<int> ans;

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                ans.push_back(arr1[i]);
            }
        }
    }

    cout << "\nIntersection are: ";
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}