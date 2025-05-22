// what is the output of the following code?

#include <iostream>

using namespace std;

struct C {
    int mv1;
    int mv2;
    double mv3;
    C (double a, double b, double c) : mv1(a), mv2(b), mv3(c) {}

    C (int a, double b, double c) : mv1(a), mv2(b), mv3(c) {
        cout << a << ' ' << b << ' ' << c << endl;
        cout << mv1 << ' ' << mv2 << ' ' << mv3 << endl;
    }
    
};

int main () {
    C c(1.1 , 2.2 , 3.3);
    cout << c.mv1 << ' ' << c.mv2 << ' ' << c.mv3 << endl;
    return 0;
}
