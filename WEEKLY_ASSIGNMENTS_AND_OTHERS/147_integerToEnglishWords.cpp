// #include <bits/stdc++.h>
// using namespace std;

// vector<pair<int, string>> mp = {{1000000000, "Billion"}, {1000000, "Million"}, {1000, "Thousand"},
//                                 {100, "Hundred"}, {90, "Ninety"}, {80, "Eighty"}, {70, "Seventy"}, 
//                                 {60, "Sixty"}, {50, "Fifty"}, {40, "Forty"}, {30, "Thirty"},
//                                 {20, "Twenty"}, {19, "Nineteen"}, {18, "Eighteen"}, 
//                                 {17, "Seventeen"}, {16, "Sixteen"}, {15, "Fifteen"}, 
//                                 {14, "Fourteen"}, {13, "Thirteen"}, {12, "Twelve"}, {11, "Eleven"}, 
//                                 {10, "Ten"}, {9, "Nine"}, {8, "Eight"}, {7, "Seven"}, {6, "Six"},
//                                 {5, "Five"}, {4, "Four"}, {3, "Three"}, {2, "Two"}, {1, "One"}};

// string numberToWords(int num) {
//     // base case
//     if(num == 0) {
//         return "Zero";
//     }
//     // 1 case solution
//     for(auto it : mp) {
//         // find that number from which the given number is just >=, like 123 is just >= 100 
//         if(num >= it.first) {
//             string a = "";
//             // because >= 100 ki values me hum aisa bolte hai ki One Hundred, Two Thousand, etc.
//             if(num >= 100) {
//                 // then we calculate that how many Hundreds are there, means One Hundred or Two Hundred
//                 // if num is 123, then 'a' will store "One"
//                 // it will further calculate the number by recursive call
//                 a = numberToWords(num / it.first) + " ";
//             }
//             // if num is 123, then 'b' will store "Hundred"
//             string b = it.second;
//             // if num is 123, then 'c' will store "Twenty Three" after recursive call
//             string c = "";
//             if(num % it.first != 0) {
//                 c = " " + numberToWords(num % it.first);
//             }
//             // at last we concatenate all the strings and return
//             return a + b + c;
//         }
//     }
//     return "";
// }

// int main() {
//     int num;
//     cout << "\nEnter the number you want to convert in english words = ";
//     cin >> num;
//     string ans = numberToWords(num);
//     cout << endl << num << " -> \" " << ans << " \"" << endl;
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

vector<pair<int, string>> mp = { {1000000000, "Billion "}, {1000000, "Million "}, {1000, "Thousand "}, {100, "Hundred "}, {90, "Ninety "}, {80, "Eighty "}, 
                                 {70, "Seventy "}, {60, "Sixty "}, {50, "Fifty "}, {40, "Forty "}, {30, "Thirty "}, {20, "Twenty "}, {19, "Nineteen "}, 
                                 {18, "Eighteen "}, {17, "Seventeen "}, {16, "Sixteen "}, {15, "Fifteen "}, {14, "Fourteen "}, {13, "Thirteen "}, 
                                 {12, "Twelve "}, {11, "Eleven "}, {10, "Ten "}, {9, "Nine "}, {8, "Eight "}, {7, "Seven "}, {6, "Six "}, {5, "Five "}, 
                                 {4, "Four "}, {3, "Three "}, {2, "Two "}, {1, "One "} };

string numToString(int num) {
    // base case
    if(num == 0) {
        return "Zero";
    }

    // 1 case solution and recursion
    for(auto it : mp) {
        if(num >= it.first) {
            string a = "";
            if(num >= 100) {
                a = numToString(num / it.first);
            }
            string b = it.second;
            string c = "";
            if(num % it.first != 0) {
                c = numToString(num % it.first);
            }
            return a + b + c;
        }
    }
    return "";
}

int main() {
    int num;
    cout << "\nEnter Number: ";
    cin >> num;
    string ans = numToString(num);
    cout << endl << num << " --> " << ans << endl;
    return 0;
}