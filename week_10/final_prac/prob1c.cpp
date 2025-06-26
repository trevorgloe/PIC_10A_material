#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << boolalpha;
    cout << static_cast<bool>(8) << endl;
    cout << static_cast<bool>(0) << endl;
    string s = "AAARGH!!!";
    if (s.find("AAA")) { cout << 1 << endl; }
    if (s.find("RGH")) { cout << 2 << endl; }
    if (s.find("???")) { cout << 3 << endl; }
    return 0;
}
