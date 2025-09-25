// midterm 1 practice
// question 1
// what is the output?

#include <iostream>
#include <string>

using namespace std;

int main(){
    string s = "PIC10A is unreal!!!";
    cout << s.find("PIC10A") << endl;
    cout << s.at(2) << endl;
    cout << s.substr(10,6) << endl;
}
