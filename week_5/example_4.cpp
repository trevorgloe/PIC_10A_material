// what is the output of the following code?

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "abcd"; 

    for (size_t i = 0; i < s.length(); ++i) {
        s.pop_back();
        
    }

    cout << s << endl;
    return 0;
 }
