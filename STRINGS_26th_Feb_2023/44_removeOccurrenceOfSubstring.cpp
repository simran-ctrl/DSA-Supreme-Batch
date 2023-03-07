#include <iostream>
using namespace std;

string removeOccurrences(string str, string part) {
    int pos = str.find(part);
    while(pos != string::npos) {
        str.erase(pos, part.length());
        pos = str.find(part);
    }
    return str;
}

int main()
{
    string str = "daabcbaabcbc";
    string part = "abc";
    string ans = removeOccurrences(str, part);
    cout << "\nAfter removing all occurrence of " << part << " from " << str << endl;
    cout << "\nThe string left is " << ans << endl;
    return 0;
}