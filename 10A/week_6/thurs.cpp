#include<iostream>

using namespace std;

bool first_letter_cap1(string s) {
    return ((s.at(0) > 65) && (s.at(0) < 91));
}

bool first_letter_cap2(string& s) {
    return ((s.at(0) > 65) && (s.at(0) < 91));
}

bool first_letter_cap3(const string& s) {
    // s.at(1)++;
    return ((s.at(0) > 65) && (s.at(0) < 91));
}

int main() {
    // little more about passing by reference
    string s = "burger";
    cout << first_letter_cap1(s) << "\n";
    cout << first_letter_cap2(s) << "\n";
    cout << first_letter_cap3(s) << "\n";
    return 0;
}
