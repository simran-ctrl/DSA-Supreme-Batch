#include <bits/stdc++.h>
using namespace std;

string addRE(string num1, int p1, string num2, int p2, int carry) {
    // base case
    if(p1 < 0 and p2 < 0) {
        if(carry != 0) {
            // agr carry bcha hua hai to 1 size ki string bnayi bche hue carry ko string me convery kiya
            // and return krwa diya
            return string(1, carry + '0');
        }
        // agr carry nahi bcha to empty string return krdi
        return "";
    }
    // 1 case solution
    // agr p1 tb tk decrement hoga jb tk numbers available hai agr p1 ya p2 me se koi bhi size me bada number hua
    // uski jgh hum 0 add krte hai and same applied for p2 also
    // 1 2 3
    //   5 8
    // yaha se pehle 8 and 3 add honge
    // then 5 and 2 add honge
    // then 58 wali string to khtm ho gayi but 123 wali string me abhi 1 pending hai
    // to 1 ke sath hum 0 ko add krdete hai
    // niche ternary operator ka use ho raha hai
    // agr p1 >= 0 hai means string bchi hui hai to num1[p1] add krdo else 0 add krdo
    // agr p2 >= 0 hai means string bchi hui hai to num2[p2] add krdo else 0 add krdo
    // - '0' means we are converting the string into integer
    // + '0' means we are converting the integer into string
    int n1 = (p1 >= 0 ? num1[p1] : '0') - '0';
    int n2 = (p2 >= 0 ? num2[p2] : '0') - '0';
    // dono strings ki last digit nikal ke add krdiya and carry bhi add krdiya
    int cSum = n1 + n2 + carry;
    // jo bhi sum aaya usme se digit nikal li, like if sum is 18 then we extract 8 and save in digit
    int digit = cSum % 10;
    // jo bhi sum aaya usme se carry nikal li, like if sum is 18 then we extract 1 and save in carry
    carry = cSum / 10;
    // this string is to save the final answer
    string ans = "";
    // jo bhi digit aayi, like agr 18 me se extract krke 8 aaya to usko string me convert krke
    // ans string me save krdiya
    ans.push_back(digit + '0');
    // baaki recursion smbhal lega
    // and through recursion we move on to the next digits to add, i.e., p1 & p2 both will decrement
    ans += addRE(num1, p1 - 1, num2, p2 - 1, carry);
    // at the end we return the final string
    return ans;
}

string addStrings(string num1, string num2) {
    // p1 & p2 dono pointers hai num1 & num2 strings ke n - 1 character se start hoga
    // addition aise hi start hota hai last se
    int p1 = num1.size() - 1;
    int p2 = num2.size() - 1;
    // initially carry is 0 because we dont have any carry in starting
    int carry = 0;
    // addRE() function will give the final string in return
    string ans = addRE(num1, p1, num2, p2, carry);
    // returned string is in reverse form so need to reverse it back to get the proper addition result
    reverse(ans.begin(), ans.end());
    // and we again return the final answer
    return ans;
}


int main() {
    string num1 = "7894";
    string num2 = "22";
    string ans = addStrings(num1, num2);
    cout << endl;
    cout << ans << endl;
    return 0;
}