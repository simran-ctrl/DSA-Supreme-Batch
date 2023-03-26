#include <bits/stdc++.h>
using namespace std;

void generateBrackets(int n, vector<string> &ans, string output, int openBracket, int closeBracket) {
    // base case
    if(openBracket == 0 and closeBracket == 0) {
        ans.push_back(output);
        return;
    }
 
    // include openBracket
    if(openBracket > 0) {
        output.push_back('(');
        // recursive call
        generateBrackets(n, ans, output, openBracket - 1, closeBracket);
        // backtracking step
        output.pop_back();
    }

    // include closeBracket
    if(closeBracket > openBracket) {
        output.push_back(')');
        // recursive call
        generateBrackets(n, ans, output, openBracket, closeBracket - 1);
        // backtracking step
        output.pop_back();
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> ans;
    string output = "";
    int openBracket = n;
    int closeBracket = n;
    generateBrackets(n, ans, output, openBracket, closeBracket);
    return ans;
}

int main() {
    int n = 4;

    vector<string> ans(generateParenthesis(n));
    
    for(int i = 0; i < ans.size(); i++) {
        cout << "\n\nPossibility " << i + 1 << ": ";
        cout << ans[i] << " ";
    }

    cout << endl;
    return 0;
}