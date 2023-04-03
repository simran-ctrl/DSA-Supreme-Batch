/* Given an input string 's' and a pattern 'p', implement wildcard pattern matching with support for '?' and '*' where:
            1 --> '?' Matches any single character
            2 --> '*' Matches any sequence of characters(including the empty sequence)
        The matching should cover the entire input string(not partial) */
#include <bits/stdc++.h>
using namespace std;

bool isMatched(string &s, int si, string &p, int pi) {
    // base case -> agr string s and string p totally khtm ho gaye means string matched hai so return true
    if(si == s.size() and pi == p.size()) {
        return true;
    }
    // agr string s khtm ho gyi but p string me kuch bcha hua hai
    if(si == s.size() and pi < p.size()) {
        while(pi < p.size()) {
            // agr string p me jo bhi bcha hai agr wo '*' nahi hai to return false
            if(p[pi] != '*') {
                return false;
            }
            pi++;
        }
        // agr string p me jo bhi bcha hai agr wo '*' hai to usko null se match krr skte hai so return true
        return true;
    }

    // 1 case solution
    // agr string s ka si character and string p ka pi character match krr rhe hai
    // ya string p ka pi character '?' hai means hum '?' ko string s ke 1 character se match krr skte hai 
    if(s[si] == p[pi] or p[pi] == '?') {
        // so recursion will check next character of both the strings
        return isMatched(s, si + 1, p, pi + 1);
    }

    // if string p ka pi character '*' hai to we have to check that how many characters of string s can '*' consume
    if(p[pi] == '*') {
        // treat '*' as empty or null
        bool caseLeft = isMatched(s, si, p, pi + 1);

        // let '*' consume 1 character
        bool caseRight = isMatched(s, si + 1, p, pi);

        return caseLeft || caseRight;
    }

    // char doesn't matched
    return false;
}

int main() {
    string s = "abcdef";
    string p = "a?*f";
    int si = 0; // pointer index for string s
    int pi = 0; // pointer index for pattern p
    if(isMatched(s, si, p, pi)) {
        cout << "\nBoth strings are matched" << endl;
    }
    else {
        cout << "\nBoth strings are not matched" << endl;
    }
    return 0;
}