#include <bits/stdc++.h>
using namespace std;

void printSubsequence(string str, string output, int i)
{
    // base case
    if (i >= str.length())
    {
        cout << output << "  ";
        return;
    }
    // exclude case
    printSubsequence(str, output, i + 1);

    // include case
    output.push_back(str[i]);
    printSubsequence(str, output, i + 1);
}

int main()
{
    string str = "babad";
    string output = "";
    int i = 0;

    cout << "\nAll subsequences of " << str << " are: ";
    printSubsequence(str, output, i);

    cout << endl;
    return 0;
}