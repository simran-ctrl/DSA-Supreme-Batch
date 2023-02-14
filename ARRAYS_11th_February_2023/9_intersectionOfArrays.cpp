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

    int i = 0;
	int j = 0;

	while (i < n1 && j < n2){
		if(arr1[i] <= arr2[j]){
			ans.push_back(arr1[i]);
			i++;
		}
		else{
			ans.push_back(arr2[j]);
			j++;
		}
	}

	while (i < n1){
		ans.push_back(arr1[i]);
		i++;
	}
	while (j < n2){
		ans.push_back(arr2[j]);
    j++;
	}

    cout << "\nIntersection are: ";
    for(i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
