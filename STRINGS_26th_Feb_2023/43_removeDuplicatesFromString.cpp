#include <iostream>
using namespace std;

string removeDuplicates(string s) {
    string ans = "";
    int i = 0;
    int j = s.length();
    while(i <= j) {
        if(ans.length() > 0 && ans[ans.length() - 1] == s[i]) {
            ans.pop_back();
        }
        else {
            ans.push_back(s[i]);
        }
        i++;
    }
    return ans;
}

int main()
{
    string s = "abbacyycabbafu";
    cout << "\nActual string is: " << s << endl;
    string ans = removeDuplicates(s);
    cout << "\nString after remove duplicates is: " << ans << endl;
    return 0;
}