#include <bits/stdc++.h>
using namespace std;

void findChar(string str, int n, char c, int i, int &charIndex)
{
    // base case
    if (i >= n)
    {
        return;
    }
    if (str[i] == c)
    {
        // charIndex = i;
        cout << "\nFound at " << i << " index" << endl;
    }
    findChar(str, n, c, i + 1, charIndex);
}

int main()
{
    string str = "baabubhaiya";
    int n = str.length();
    int i = 0;
    char c = 'a';
    int charIndex;
    findChar(str, n, c, i, charIndex);
    // cout << "\nIndex where the character " << c << " is found is: " << charIndex << endl;
    return 0;
}