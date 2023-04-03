/* In concept of Constant Pointer -> we can change the value of the variable to which the pointer points,
   but we can't change the address of pointer variable because its constant */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 1;
    int b = 2;
    int *const ptr = &a;
    cout << a << endl;
    cout << *ptr << endl;
    *ptr = 20; // this is possible
    ptr = &b; // this is not possible
    cout << a << endl;
    cout << *ptr << endl;
    return 0;
}