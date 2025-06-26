#include <iostream>
using namespace std;

void f(double d1, int i1) { cout << 1 << endl; }
void f(double d1, double d2) { cout << 2 << endl; }
void f(int i1, int i2, double d1 = 7) { cout << d1 + 200 << endl; }
void f(int i1, double d1, double d2 = 7.8) { cout << d2 + 100 << endl; }

int main() {
    f(1 , 2.6 );
    f(1 , 2 , 3);
    f(1.2 , 2 );
    f(1.2 , 1.4 );
    return 0;
}
