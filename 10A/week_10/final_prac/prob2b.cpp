#include <iostream>
#include <string>
using namespace std;

void f(string& s) { cout << s << endl; }

void g(const string& s) { f(s); }

int main() {
    g("12afa");
    return 0;
}
