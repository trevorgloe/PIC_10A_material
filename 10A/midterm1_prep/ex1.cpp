/*
What is the output of the following code?
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
    string s = "aonian";
    for (int i=0; i<s.size(); i++) {
        s.at(i) += i;
    }
    cout << s << "\n";
    return 0;
}
