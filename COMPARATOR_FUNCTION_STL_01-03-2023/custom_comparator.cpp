#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// built in comparator function in STL
int main()
{
    string s = "vanshika";
    sort(s.begin(), s.end(), greater<int>());
    cout << endl;
    cout << s << endl;
    return 0;
}

// //custom comparator in STL
// bool cmp(char a, char b)
// {
//     return a < b;
// }

// int main()
// {
//     string s = "vanshika";
//     sort(s.begin(), s.end(), cmp);
//     cout << endl;
//     cout << s << endl;
//     return 0;
// }