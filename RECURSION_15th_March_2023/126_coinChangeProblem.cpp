#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int n, int sum)
{
    // base case
    if (sum == 0)
    {
        return 0;
    }
    if (sum < 0)
    {
        return INT_MAX;
    }
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int ans = solve(arr, n, sum - arr[i]);
        if (ans != INT_MAX)
        {
            mini = min(mini, ans + 1);
        }
    }
    return mini;
}

int main()
{
    int arr[] = {1, 2, 5};
    int n = 3;
    int sum = 11;

    int ans = solve(arr, n, sum);
    cout << "\nMinimum coins we need to make " << sum << " is " << ans << endl;
    return 0;
}