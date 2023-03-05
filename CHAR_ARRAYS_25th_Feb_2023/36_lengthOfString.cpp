#include <iostream>
#include <cstring>
using namespace std;

int getLength(char name[]) {
    int length = 0;
    for(int i = 0; i < 100; i++) {
        if(name[i] == '\0') {
            break;
        }
        else {
            length++;
        }
    }
    return length;
}

int main()
{
    char name[100];
    cout << "\nEnter name: ";
    cin.getline(name, 100);

    int length = getLength(name);

    cout << "\nLength of your entered string is: " << length << endl;
    cout << "\nLength -> " << strlen(name) << endl;
    return 0;
}