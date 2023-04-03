#include <bits/stdc++.h>
using namespace std;

void demo() {
    static int count = 10; // because of static keyword value of count is increasing after every call else the value would be printed same every time
    cout << count << endl;
    count++;
}

int main() {
    for(int i = 0; i < 5; i++) {
        demo();
    }
    return 0;
}