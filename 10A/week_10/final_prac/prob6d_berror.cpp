// Note: this one is kinda tricky
#include <iostream>
#include <string>

using namespace std;

class A {
public:
    A(int _i) : i(_i) {}
private:
    int i;
};

class D {
public:
    D() { a = A(0); }
private:
    A a;
};

int main() {
    return 0;
}
