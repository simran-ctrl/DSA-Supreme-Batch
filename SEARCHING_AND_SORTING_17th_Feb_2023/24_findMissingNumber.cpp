#include <iostream>
using namespace std;

int missingNum(int arr[], int n) {
    int total = (n + 1) * (n + 2) / 2;
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    int miss = total - sum;

    return miss;
}

int main()
{
    int arr[] = {1, 2, 3, 5, 6, 7, 8};
    int n = 7;

    int miss = missingNum(arr, n);

    cout << "\nMissing number in array is: " << miss << endl;
    return 0;
}