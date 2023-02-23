#include <iostream>
using namespace std;

int solve(int dividend, int divisor) {
    int start = 0;
    int end = abs(dividend);
    int mid;
    int ans = 0;

    while(start <= end) {
        mid = (start + end) / 2;
        if(abs(mid * divisor) == abs(dividend)) {
            return mid;
        }
        else {
            if(abs(mid * divisor) > abs(dividend)) {
                end = mid - 1;
            }
            else {
                ans = mid;
                start = mid + 1;
            }
        }
    }
    if((divisor < 0 && dividend < 0) || (divisor > 0 && dividend > 0)) {
        return ans;
    }
    else {
        return -ans;
    }
}

int main()
{
    int dividend = 22;
    int divisor = 7;

    int ans = solve(dividend, divisor);

    cout << "\nAns is: " << ans << endl;
    return 0;
}