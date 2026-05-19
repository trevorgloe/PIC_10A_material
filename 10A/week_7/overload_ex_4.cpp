// the following code does NOT encounter a build error, which is strange considering example 5, any guesses why that is?

#include <iostream>

using namespace std;

void f(int i) {cout << '1' << i << endl;}
void f(double d) {cout << '2' << d << endl;}

int main() {
    f('X');
    return 0;
 }
