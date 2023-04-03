/* First, we write the code where we are changing the value of a pointer */
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int a = 100;  
//     int b = 200;  
//     const int *ptr;  
//     ptr = &a;
//     ptr = &b; // here we are changing the value of pointer  
//     cout << "Value of ptr is: " << ptr;  
//     return 0;
// }


/* Now, we write the code in which we are changing the value of the variable to which the pointer points */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 100;  
    int b = 200;  
    const int* ptr;  
    ptr = &b;  
    *ptr = 300; // this is not possible
    cout << "Value of ptr is: " << *ptr;
    return 0;
}