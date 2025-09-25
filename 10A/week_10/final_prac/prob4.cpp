// what is the output of the following code?

#include <iostream>
using namespace std;

int f(int& a, int b, int& c) {
    cout << a << " " << b << " " << c << endl;
    a += 6+c;
    b *= 3;
    cout << a << " " << b << " " << c << endl;
    return b;
}

int main() {
    int a = 10, b = 20, c = 30;
    int d = f(a,a,a);
    cout << a << " " << b << " " << c << " " << d << endl;
    return 0;
}
