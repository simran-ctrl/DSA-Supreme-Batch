#include <bits/stdc++.h>
using namespace std;

class Animal {
    public:
        // state or properties
        int age;
        string name;

        // behaviour or functions
        void eat() {
            cout << "\nEating";
        }
        void sleep() {
            cout << "\nSleeping";
        }
};

int main() {
    // object creation
    // static memory
    Animal an; // object of class Animal --> name of object is 'an' 
    cout << "\nAge of animal is " << an.age << endl;
    cout << "\nName of animal is " << an.name << endl;
    an.eat();
    an.sleep();
    return 0;
}