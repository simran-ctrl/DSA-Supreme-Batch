/* ITERATIVE SOLUTION */
// #include <bits/stdc++.h>
// using namespace std;

// string removeOccurrences(string str, string part) {
//     int pos = str.find(part);
//     while(pos != string::npos) {
//         str.erase(pos, part.length());
//         pos = str.find(part);
//     }
//     return str;
// }

// int main() {
//     string str = "daabcbaabcbc";
//     string part = "bc";
//     string ans = removeOccurrences(str, part);
//     cout << "\nFinal string after removing " << part << " from " << str << " is: " << ans << endl;
//     return 0;
// }


/* RECURSIVE SOLUTION */
#include <bits/stdc++.h>
using namespace std;

void removeOccurrences(string &str, string &part) {
    int pos = str.find(part);
    if(pos != string::npos) {
        // means part string has been located
        // now we remove this part string from str
        string leftPart = str.substr(0, pos);
        string rightPart = str.substr(pos + part.length(), str.length());
        str = leftPart + rightPart;

        removeOccurrences(str, part);
    }
    else {
        // base case
        return;
    }
}

int main() {
    string str = "daabcbaabcbc";
    string part = "bc";
    removeOccurrences(str, part);
    cout << "\nFinal string after removing " << part << " is: " << str << endl;
    return 0;
}