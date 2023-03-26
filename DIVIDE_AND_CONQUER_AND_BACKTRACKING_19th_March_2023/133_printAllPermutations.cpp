#include <bits/stdc++.h>
using namespace std;

void printPermutation(string &str, int i) {
    // base case
    if(i >= str.length()) {
        cout << str << endl;
        return;
    }
    // swapping
    for(int j = i; j < str.length(); j++) {
        swap(str[i], str[j]);
        printPermutation(str, i + 1);
        // below is the only BACKTRACKING line, & this line we use when the string is passed by reference
        // if we provide the string by reference and dont provide the BACKTRACKING line then 2 permutations print repeatedly
        // if string dont passed by reference then there is no need of BACKTRACKING line
        swap(str[i], str[j]);
    }
}

int main() {
    string str = "abc";
    int i = 0;
    printPermutation(str, i);
    return 0;
}