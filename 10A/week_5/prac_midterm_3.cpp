// practice midterm 1
// question 3
// what is the output?

#include <iostream>
#include <string>

using namespace std;

int main(){
    string s = "my string";
    int i = 0;
    while (i < s.length()){
        cout << s[i];
        ++i;
    }
    cout << endl;
}
