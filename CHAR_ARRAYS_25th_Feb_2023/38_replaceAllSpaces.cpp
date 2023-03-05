#include <iostream>
#include <cstring>
using namespace std;

void replaceSpaces(char name[], int n) {
    for(int i = 0; i < n; i++) {
        if(name[i] == ' ') {
            name[i] = '@';
        }
    }
    cout << "\nReplaced string is: " << name << endl;
}

int main()
{
    char name[100];
    cout << "\nEnter your name: ";
    cin.getline(name, 100);

    cout << "\nYou've entered: " << name << endl;

    int n = strlen(name);
    replaceSpaces(name, n);
    return 0;
}