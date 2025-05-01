// Does the following code produce a build error, runtime error, or undefined behavior? Or does it run successfully?

#include <iostream>
using namespace std;

void f(int& r) {
    ++r;
}

int main() {
    f(0);
    cout << 0 << endl ;
    return 0;
}
