/* LEETCODE QUESTION NO. 983 */
#include <bits/stdc++.h>
using namespace std;

int minCostTickets(vector<int>& days, vector<int>& costs, int i) {
    // base case
    if(i >= days.size()) {
        return 0;
    }

    // solution for 1 case --> we take each day pass one by one and check for days
    // 1 Day Pass Taken
    int cost1 = costs[0] + minCostTickets(days, costs, i + 1);

    // 7 Day Pass Taken
    // passEndDay --> it will calculate that if we buy the 7 day pass then on which day it will end
    int passEndDay = days[i] + 7 - 1;
    int j = i;
    // through this array we iterate over days and go to that day on which our 7 day pass ended
    while(j < days.size() and days[j] <= passEndDay) {
        j++;
    }
    // then we check for next day of pass ended
    int cost7 = costs[1] + minCostTickets(days, costs, j);

    // 30 Day Pass Taken
    // passEndDay --> it will calculate that if we buy the 7 day pass then on which day it will end
    passEndDay = days[i] + 30 - 1;
    j = i;
    // through this array we iterate over days and go to that day on which our 30 day pass ended
    while(j < days.size() and days[j] <= passEndDay) {
        j++;
    }
    // then we check for next day of pass ended
    int cost30 = costs[2] + minCostTickets(days, costs, j);

    // when all the costs calculated then we find the minimum from the cost and return
    return min(cost1, min(cost7, cost30));
}

int main() {
    vector<int> days{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 30, 31};
    vector<int> costs{2, 7, 15};
    // i represents 0th day
    int i = 0;
    cout << endl << minCostTickets(days, costs, i) << endl;
    return 0;
}