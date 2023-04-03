/* Using Iteration */
// #include <bits/stdc++.h>
// using namespace std;

// bool checkPalindrome(string str) {
//     int i = 0;
//     int j = str.length() - 1;
//     while(i <= j) {
//         if(str[i] != str[j]) {
//             return false;            
//         }
//         i++;
//         j--;
//     }
//     return true;
// }

// int main() {
//     string str = "naman";
//     if(checkPalindrome(str)) {
//         cout << "\nString is palindrome" << endl;
//     }
//     else {
//         cout << "\nString is not palindrome" << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str, int i, int j) {
    // base case
    if(i >= j) {
        return true;
    }
    // 1 case solve
    if(str[i] != str[j]) {
        return false;
    }
    return checkPalindrome(str, i + 1, j - 1);
}

int main() {
    string str = "naman";
    int i = 0;
    int j = str.length() - 1;
    if(checkPalindrome(str, i, j)) {
        cout << "\nString is palindrome" << endl;
    }
    else {
        cout << "\nString is not palindrome" << endl;
    }
    return 0;
}