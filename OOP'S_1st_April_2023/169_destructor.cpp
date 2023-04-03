/* Automatically destructor will called because here we do static memory allocation */
// #include <bits/stdc++.h>
// using namespace std;

// class Animal {
//     public:
//         ~ Animal() {
//             cout << "\nDestructor called.....";
//         }
//         Animal() {
//             cout << "\nConstructor called.....";
//         }
// };

// int main() {
//     Animal an;
//     return 0;
// }

/* Destructor will not called automatically as we are doing dynamic memory allocation */
#include <bits/stdc++.h>
using namespace std;

class Animal {
    public:
        ~ Animal() {
            cout << "\nDestructor called.....";
        }
        Animal() {
            cout << "\nConstructor called.....";
        }
};

int main() {
    Animal *an = new Animal();
    delete an;
    return 0;
}