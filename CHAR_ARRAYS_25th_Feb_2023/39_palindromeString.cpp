#include <iostream>
#include <cstring>
using namespace std;

bool palString(char name[], int n) {
    int i = 0, j = n - 1;
    while(i <= j) {
        if(name[i] == name[j]) {
            i++;
            j--;
        }
        else {
            return false;
        }
    }
    return true;
}

int main()
{
    char name[100];
    cout << "\nEnter your name: ";
    cin.getline(name, 100);

    cout << "\nYou've entered: " << name << endl;

    int n = strlen(name);
    if(palString(name, n)) {
        cout << "\nYour string is palindrome" << endl;
    }
    else {
        cout << "\nYour string is not palindrome" << endl;
    }
    return 0;
}