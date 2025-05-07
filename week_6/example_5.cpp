// the following code encounters a build error, why is that?

#include <iostream>

using namespace std;

void f(int i) {cout << '1' << i << endl;}
void f(char c) {cout << '2' << c << endl;}

int main() {
    f(0.0);
    return 0;
 }
