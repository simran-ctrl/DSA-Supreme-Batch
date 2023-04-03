/* Using str.rfind() method of STL --> str.rfind() will return the last index of the given character */
/* str.find() will return the first index of the given character */
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string str = "abcidideifgdhidij";
//     char x = 'z';
//     int lastIndex = str.rfind(x); // finding last index using rfind() method of STL
//     if(lastIndex == -1) {
//         cout << "\nChar " << x << " not found in the string" << endl;
//     }
//     else {
//         cout << "\nLast Occurrence of " << x << " in " << str << " is at " << lastIndex << " index" << endl;
//     }
//     return 0;
// }


/* Using User Defined Function Iteratively */
// #include <bits/stdc++.h>
// using namespace std;

// int findLastOccurrence(string str, char x) {
//     for(int i = str.size() - 1; i >= 0; i--) {
//         if(str[i] == x) {
//             return i;
//         }
//     }
//     return -1;
// }

// int main() {
//     string str = "abcidideifgdhidij";
//     char x = 'i';
//     int lastIndex = findLastOccurrence(str, x); // finding last index using user defined function
//     if(lastIndex == -1) {
//         cout << "\nChar " << x << " not found in the string" << endl;
//     }
//     else {
//         cout << "\nLast Occurrence of " << x << " in " << str << " is at " << lastIndex << " index" << endl;
//     }
//     return 0;
// }


/* Using Recursion Approach --> Left to Right Search */
// #include <bits/stdc++.h>
// using namespace std;

// void findLastOccurrence(string str, char x, int i, int &ans) {
//     // base case
//     if(i >= str.length()) {
//         return;
//     }
//     // 1 case solution
//     if(str[i] == x) {
//         ans = i;
//     }
//     // recursion smbhaal lega
//     findLastOccurrence(str, x, i + 1, ans);
// }

// int main() {
//     string str = "abcidideifgdhidj";
//     char x = 'i';
//     int i = 0;
//     int ans = -1;
//     findLastOccurrence(str, x, i, ans); // finding last index using recursion Left to Right
//     cout << "\nLast Occurrence of " << x << " in " << str << " is at " << ans << " index" << endl;
//     return 0;
// }



/* Using Recursion Approach --> Right to Left Search */
#include <bits/stdc++.h>
using namespace std;

void findLastOccurrence(string str, char x, int i, int &ans) {
    // base case
    if(i < 0) {
        return;
    }
    // 1 case solution
    if(str[i] == x) {
        ans = i;
        return;
    }
    // recursion smbhaal lega
    findLastOccurrence(str, x, i - 1, ans);
}

int main() {
    string str = "abcidideifgdhidj";
    char x = 'e';
    int i = str.size() - 1;
    int ans = -1;
    findLastOccurrence(str, x, i, ans); // finding last index using recursion Right to Left
    cout << "\nLast Occurrence of " << x << " in " << str << " is at " << ans << " index" << endl;
    return 0;
}