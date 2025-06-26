// what is the output of the following code and the input buffer when its done executing?
// Assume that the user types
// Hello, my name is
// Andre 2000
// Hey ya

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1;
    char c1;
    string s2;
    string s3;
    int i1;
    char c2;
    char c3;
    cin >> c1;
    getline(cin, s1);
    cin >> s2;
    cin >> c2;
    cin >> i1;
    cin >> c3;
    cin >> s3;

    cout << s1 << "\n";
    cout << c1 << "\n";
    cout << s2 << "\n";
    cout << s3 << "\n";
    cout << i1 << "\n";
    cout << c2 << "\n";
    cout << c3 << "\n";
    return 0;
}
