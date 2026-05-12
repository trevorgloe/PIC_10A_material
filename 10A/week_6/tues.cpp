#include<iostream>

using namespace std;

void plus_plus(int& i) {
    i++;
}

int pure(int i) {
    return i*i + 1;
}

void procedure(int& i) {
    i *= i;
    i += 1;
}

int main() {
    // references
    int a = 1;
    plus_plus(a);
    cout << a << "\n";

    int& ra = a;
    ra++;
    cout << a << "\n";

    float d = 2.32;
    const float& dr = d;
    d += 1.0;
    // dr += 1.0;
    const float c = 1.0;
    // float& cr = c;

    // 2 types of functions
    // pure function takes everything by value, and returns by value
    // procedures take arguments by reference and change the data in place
    int i = 1;
    int j = pure(i);
    procedure(i);
    return 0;
}
