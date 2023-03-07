#include <iostream>
using namespace std;

int expandIndexes(string s, int i, int j)
{
    int count = 0;
    while (i >= 0 && j < s.size() && s[i] == s[j])
    {
        count++;
        i--;
        j++;
    }
    return count;
}

int countSubstrings(string s)
{
    int count = 0;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        int oddAns = expandIndexes(s, i, i);
        count += oddAns;

        int evenAns = expandIndexes(s, i, i + 1);
        count += evenAns;
    }
    return count;
}

int main()
{
    string s = "naman";
    int count = countSubstrings(s);
    cout << "\nTotal palindromic substrings available in " << s << " is: " << count << endl;
    return 0;
}