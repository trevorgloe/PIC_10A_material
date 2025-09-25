// what is the output?

#include <iostream>
using namespace std;

void f(int i) {
    ++i;
}

int main() {
    int i = 0;
    f (i);
    cout << i << endl;
    return 0;
}
