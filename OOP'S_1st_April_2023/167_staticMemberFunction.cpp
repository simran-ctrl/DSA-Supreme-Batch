#include <bits/stdc++.h>
using namespace std;

class Animal {
    public:
        int a;

        static void sleep() {
            cout << "\nSleeping" << endl;
        }
};

int main() {    
    Animal an;
    an.sleep();
    return 0;
}   