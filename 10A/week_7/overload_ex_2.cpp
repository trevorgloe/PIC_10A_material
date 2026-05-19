// Does the following code build without error? And if so what is the output?

#include <iostream>

using namespace std;

void f() {cout << '1' << endl;}
void f(char c) {cout << '2' << c << endl;}
void f(bool b, char c) {cout << '3' << b << endl;}

int main () {
    f('c', false);

    return 0;
 }
