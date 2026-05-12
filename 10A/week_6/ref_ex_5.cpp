#include<iostream>
#include<string>
/*
what is wrong with the following function, for getting the first letter of a string
Hint: there are multiple things wrong
*/

using namespace std;

char get_first(const string& s) {
    return s[0];
}

int main() {
    string s = "here is a string";
    cout << get_first(s) << "\n";
    const string s2 = "const";
    cout << get_first(s2) << "\n";
    return 0;
}
