#include<iostream>
#include<string>
/*
Lets make a function that will capitalize the first letter of each word
It should take in a string, by reference and then go through it, capitalizing each word in the string
example: cap("this is a test string") -> "This Is A Test String"
*/
using namespace std;

void f(string& s) {
    bool stop = false;
    int idx = 0;
    while(!stop) {
        s[idx] -= 32;
        string sub = s.substr(idx, s.length() - idx);
        // cout << sub << "\n";
        size_t add = s.substr(idx, s.length()-idx).find(" ");
        // idx += s.substr(idx, s.length()-idx).find(" ");
        if (add == string::npos) {
            stop = true;
        }
        idx += add;
        idx++;
        // cout << idx << "\n";
        // cout << s << "\n";
        // cout << s.length() << "\n";
    }
}

int main() {
    string s = "according to all known laws of aviation, there is no way a bee should be able to fly\n";
    // cout << s.length() << "\n";
    f(s);
    cout << s << "\n";
    return 0;
}
