#include <iostream>
#include <cstring>
using namespace std;

void convertUppercase(char name[], int n) {
    for(int i = 0; i < n; i++) {
        if(name[i] == ' ') {
            continue;
        }
        else {
            name[i] = name[i] - 'a' + 'A';
        }
    }
    cout << "\nUppercase string is: " << name << endl;
}

int main()
{
    char name[100];
    cout << "\nEnter your name: ";
    cin.getline(name, 100);

    cout << "\nYou've entered: " << name << endl;

    int n = strlen(name);

    convertUppercase(name, n);

    return 0;
}