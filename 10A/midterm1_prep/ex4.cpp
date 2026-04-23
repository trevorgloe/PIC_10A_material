/*
What is the problem with the following code?
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
    string s;
    string t = "new string!";
    if (t.at(2) == 'w') {
        s = "old string!";
        int p = s.find("string");
    } else {
        s = "older string!";
        int p = s.find("string");
    }
    cout << "string has position " << p << "\n";
    return 0;
}
