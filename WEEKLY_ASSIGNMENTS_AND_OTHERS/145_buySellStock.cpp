/* Using Iteration */
// #include <bits/stdc++.h>
// using namespace std;

// int maxProfit(vector<int>& prices) {
//     int mini = INT_MAX;
//     int maxi = INT_MIN;
//     // for(int i = 0; i < prices.size(); i++) {
//     //     mini = min(mini, prices[i]);
//     //     for(int j = i; j < prices.size(); j++) {
//     //         if(prices[j] > prices[i]) {
//     //             maxi = max(maxi, prices[j]);
//     //         }
//     //     }
//     // }
//     for(int i = 0; i < prices.size(); i++) {
//         if(prices[i] < mini) {
//             mini = prices[i];
//         }
//         if((prices[i] - mini) > maxi) {
//             maxi = prices[i] - mini;
//         }
//     }
//     return maxi;
// }

// int main() {
//     vector<int> prices{7, 6, 5, 3, 8, 40};
//     int ans = maxProfit(prices);
//     cout << endl << ans << endl;
//     return 0;
// }


/* Using Recursion */
#include <bits/stdc++.h>
using namespace std;

void maxProfitFinder(vector<int> &prices, int i, int &mini, int &maxi) {
    // base case
    if(i == prices.size()) {
        return;
    }

    // 1 case solution
    if(prices[i] < mini) {
        mini = prices[i];
    }
    if((prices[i] - mini) > maxi) {
        maxi = prices[i] - mini;
    }

    // recursive call
    maxProfitFinder(prices, i + 1, mini, maxi);
}

int maxProfit(vector<int> &prices) {
    int mini = INT_MAX;
    int maxi = INT_MIN;
    int i = 0;
    maxProfitFinder(prices, i, mini, maxi);
    return maxi;
}

int main() {
    vector<int> prices{7, 6, 5, 1, 3, 8, 40};
    int ans = maxProfit(prices);
    cout << endl << ans << endl;
    return 0;
}