#include <iostream>
#include <string>

using namespace std;

void f(int i);
void g(int j);

void f(int i) {
    cout << i << endl;
    if (i<30) { g(i+2); }
    cout << i << endl;
}

void g(int j) {
    cout << j << endl;
    if (j<30) { f(j+10); }
    cout << 100*j << endl;
}
int main() {
    f(8);
    return 0;
}
