/* Using Iteration Method --> While Loop */
// #include <bits/stdc++.h>
// using namespace std;

// void reverseIter(string &str) {
//     int l = 0;
//     int r = str.length() - 1;
//     while(l <= r) {
//         swap(str[l], str[r]);
//         l++;
//         r--;
//     }
// }

// int main() {
//     string str = "abcdef";
//     cout << "\nBefore Reverse: " << str << endl;
//     reverseIter(str);
//     cout << "\nAfter Reverse: " << str << endl;
//     return 0;
// }


/* Using Recursion */
#include <bits/stdc++.h>
using namespace std;

void reverseRecur(string &str, int l, int r) {
    // base case
    if(l > r) {
        return;
    }
    // 1 case solve
    swap(str[l], str[r]);
    // baaki recursion smbhaal lega
    reverseRecur(str, l + 1, r - 1);
}

int main() {
    string str = "abcdef";
    int l = 0;
    int r = str.length() - 1;
    cout << "\nBefore Reverse: " << str << endl;
    reverseRecur(str, l, r);
    cout << "\nAfter Reverse: " << str << endl;
    return 0;
}