// what is the output of the following code?

#include <iostream>
#include <string>
#include <utility>

using namespace std;

int main() {
    string s1("1");
    string s2("2");
    string *p1 = &s1;
    string *p2 = &s2;
    swap(p1, p2);
    cout << s1 << s2 << *p1 << *p2 << endl;
    return 0;
}
