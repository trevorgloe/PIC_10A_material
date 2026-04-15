#include<iostream>
#include<string>
#include<typeinfo>

using namespace std;

int main() {
    // bit more about strings
    // 3 different ways to create a string
    // 1. variable initialization
    string s = "hey";

    // 2. Class constructor syntax
    string t("whats up");

    // 3. alternative constructors
    string r(4, 'a');
    cout << s << " " << t << " " << r << "\n";

    // technically one more
    string u; // u is default constructed
    cout << u << "\n";

    // length and at()
    cout << s.length() << "\n"; // size of s
    cout << s.at(1) << "\n";
    cout << "s.at(1) is type " << typeid(s.at(1)).name() << "\n";

    // substr
    cout << t.substr(5, 3) << "\n";
    // find and rfind
    cout << t.find("up") << "\n";
    string t2 = "hi hi hi hi";
    cout << t2.rfind("hey") << "\n";
    cout << static_cast<size_t>(-1) << "\n";
    cout << (t2.rfind("hey") == static_cast<size_t>(-1)) << "\n";

    // push back and erase
    t.push_back('a');
    cout << t << "\n";
    t.erase(5, 8);
    cout << t << "\n";
    // cout << t2.push_back('a') << "\n";
    size_t a = 1;
    return 0;
}
