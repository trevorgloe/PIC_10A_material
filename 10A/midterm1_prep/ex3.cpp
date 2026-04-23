/*
What is the output of the following code?
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
    string s = "This is a very long string, full of different words";
    if (s.find("very") != string::npos) {
        cout << s.substr(s.find("very"), 16) << " ";
    }

    if (s.find("Full") != string::npos) {
        cout << "really " << s.substr(s.find("Full"), 7) << " ";
    } else if (s.find("full") != string::npos) {
        cout << s.substr(s.find("full"), 7) << " ";
    }

    switch (s.rfind("is")) {
        case 0:
            cout << "of stuff\n";
            break;
        case 2:
            cout << s.substr(s.find("of"), 18) << "\n";
            break;
        case 5:
            cout << "letters!\n";
            break;
        default:
            cout << "of defaults\n";
            break;
    }
    return 0;
}
