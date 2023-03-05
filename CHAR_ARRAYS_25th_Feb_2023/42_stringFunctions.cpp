#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Find absence of character in string";
    cout << "\nYou've entered: " << str << endl;

    //length of the string
    cout << "\nLength of your string is: " << str.length() << endl;

    //check the string is empty or not
    cout << "\nYour string is empty(0 means False, 1 means True): " << str.empty() << endl;

    //push_back
    str.push_back('Z');
    cout << "\nAfter push_back: " << str << endl;

    //pop_back
    str.pop_back();
    cout << "\nAfter pop_back: " << str << endl;

    //find substring in a string
    cout << "\nSubstring from 5th Index to 7 Character is: " << str.substr(5, 7) << endl;

    //compare two strings
    string A = "Hello World";
    string B = "Hello World";
    cout << "\nString A is: " << A << endl;
    cout << "\nString B is: " << B << endl;
    if(A.compare(B) == 0) {
        cout << "\nBoth strings are exactly equal" << endl;
    }
    else {
        cout << "\nBoth strings are different" << endl;
    }

    //find in a string
    string str1 = "Find absence of character in string";
    string str2 = "of";
    cout << "\nString str1 is: " << str1 << endl;
    cout << "\nString str2 is: " << str2 << endl;
    if(str1.find(str2) != string::npos) {
        cout << "\nIndex where str2 is found in str1 is: " << str1.find(str2) << endl;
    }
    else {
        cout << "\nString not found." << endl;
    }

    //replace 1 string with another string
    string message = "This is my first message";
    string word = "your";
    cout << "\nString str1 is: " << message << endl;
    cout << "\nString str2 is: " << word << endl;
    cout << "\nAfter replace massage with word is: " << message.replace(8, 2, word) << endl;

    //erase string
    string message1 = "This is my first message";
    cout << "\nMessage is: " << message1 << endl;
    cout << "\nYour message after erase is: " << message1.erase(11, 5) << endl;
    return 0;   
}