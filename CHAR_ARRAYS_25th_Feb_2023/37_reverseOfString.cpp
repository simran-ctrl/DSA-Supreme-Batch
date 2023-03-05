#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char name[], int n) {
    int i = 0, j = n - 1;
    while(i <= j) {
        swap(name[i], name[j]);
        i++;
        j--;
    }
    cout << "\nReverse of your string is: " << name << endl;
}

int main()
{
    char name[100];
    cout << "\nEnter your name: ";
    cin.getline(name, 100);

    cout << "\nYou've entered: " << name << endl;

    int n = strlen(name);
    reverseString(name, n);

    return 0;
}