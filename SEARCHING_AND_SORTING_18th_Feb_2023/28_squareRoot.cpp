#include <iostream>
using namespace std;

double squareRoot(int n) {
    int start = 0, end = n, mid;
    int ans;
    while(start <= end) {
        mid = start + (end - start) / 2;
        int square = mid * mid;
        if(square == n) {
            return mid;
        }
        else if(square < n) {
            ans = mid;
            start = mid + 1;
        }
        else {
            //left side search
            end = mid - 1;
        }
    }

    int precision;
    cout << "\nEnter the no. of floating digits in precision: ";
    cin >> precision;

    double step = 0.1;
    double finalAns = ans;
    for(int i = 0; i < precision; i++) {
        for(double j = finalAns; j * j <= n; j+=step) {
            finalAns = j;
        }
        step /= 10;
    }

    return finalAns;
}

int main()
{
    int n;
    cout << "\nEnter a number to find its square root: ";
    cin >> n;

    double ans = squareRoot(n);

    cout << "\nSquare root of " << n << " is " << ans << endl;
    return 0;
}