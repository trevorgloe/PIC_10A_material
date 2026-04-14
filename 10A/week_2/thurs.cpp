#include<iostream>
#include<string>

using namespace std;

int main() {
    string s = "Burger";
    cout << s << "\n";

    // get characters from the string
    cout << s.at(3) << "\n";
    cout << s[3] << "\n";
    // cout << s[100] << "\n";

    string first = "Adam";
    string last = "Ondra";
    string full = first + " " + last;
    // string full2 = "Adam" + "Ondra";

    // some other string functions
    cout << s.length() << "\n";
    s.pop_back();
    cout << s << "\n";
    s.push_back('r');
    cout << s << "\n";

    // user input
    string input;
    string input2;
    cin >> input >> input2;
    cout << input << "\n" << input2 << "\n";
    // string test = "something else";
    return 0;
}
