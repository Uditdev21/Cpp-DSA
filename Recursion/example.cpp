#include <bits/stdc++.h>
using namespace std;

int myCount = 0; // Renamed global variable

void test() {
    if (myCount == 3) return;
    cout << myCount << endl;
    myCount++;
    test();
}

int main() {
    test();
    return 0;
}
