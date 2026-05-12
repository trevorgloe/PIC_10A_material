#include<iostream>
#include<string>
/*
Lets make a function that will capitalize the first letter of each word
It should take in a string, by reference and then go through it, capitalizing each word in the string
example: cap("this is a test string") -> "This Is A Test String"
*/
using namespace std;

void f(string& s) {
    // Hint: to capitalize a char, you can do c - 32
    bool stop = false;
    int idx = 0;
    while (!stop) {
        // some stuff
        idx = s.substr(idx, s.length() - idx).find(' ');
        // check if idx is bigger than the size of the string
        stop = true;
    }
}

int main() {

    return 0;
}
