#include <iostream>
#include <string>

using namespace std;

class B {
public:
    B(double _d) : d(_d) {}
    void print(double d) { cout << d << endl; }
private:
    double d;
};

int main() {
    B b(0.0);
    b.print();
    return 0;
}
