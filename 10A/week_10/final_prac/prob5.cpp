// what is the output of the following code?

#include <iostream>
#include <vector>
using namespace std;

struct A {
    int i;
    vector<int> v;
    A(int _i ) : i(_i), v(4 ) { }
    A(int _i, size_t n, int j) : i(_i), v(n,j) { cout << "i = " << i << endl; }
};

struct B {
    double d;
    A a1;
    A a2;
    B(double _d) : d(_d), a1(_d), a2(82,1,6) { cout << "d = " << d << endl; }
};

int main() {
    B b(3.14);
    cout << b.d << " "
    << b.a1.i << " " << b.a1.v.size() << " "
    << b.a2.i << " " << b.a2.v[0] << endl;
    return 0;
}
