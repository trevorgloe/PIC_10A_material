#include <iostream>
#include <string>

using namespace std;

class A {
public:
    A(int _i) : i(_i) {}
private:
    int i;
};

int main() {
    A a(0);
    cout << a.i << endl;
    return 0;
}
