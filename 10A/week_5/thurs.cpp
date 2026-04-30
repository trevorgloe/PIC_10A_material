#include<iostream>
#include<string>

using namespace std;

/*
Function to return the maximum of 2 ints

@param : a one of the integers
@param : b one of the integers
@return : the maximum
*/
int my_max(int a, int b) {
    // return the maximum
    // a += other_int;
    if (a > b) {
        int a = 1;
        return a;
    } else {
        return b;
    }
    // a  = a + b;
}

int main() {
    // 2 times you would use a function
    //  1. If you want to do osomething a bunch of times in different places
    //  2. Readability

    // call my function
    int a = 2;
    // int b = 10;
    int other_int = 1;
    int c = my_max(1, 2);
    
    // errors
    // 1. Build error
    // errors at build-time
    // const int a;

    // 2. Runtime error
    // errors at runtime
    int b;
    cin >> b;
    cout << 4/b << "\n";

    // 3. Undefined behavior
    // This is the most dangerous
    string s = "Hello";
    cout << s[1000000] << "\n";
    return 0;
}
