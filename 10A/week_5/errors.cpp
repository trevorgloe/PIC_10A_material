#include<iostream>
#include<string>

using namespace std;

int main() {
    // Let me mention the 3 kinds of errors
    // 1. Build error
    // This is an error that will occur when the program builds
    // Recall that running a cpp file is actually several things: the program builds, i.e. turns into a binary file that the computer can run, and then the binary file is run
    const int a; // example: uninitialized const varaible
    
    // 2. Runtime error
    // This is an error that occurs after the program has been built when you actually run the binary
    int b;
    cin >> b;
    cout << 4 / b << "\n"; // example: using user input in the wrong way
    // The compiler is not able to catch this because it doesn't actually know if b will create problems when we try to divide it

    // 3. Undefined behavior
    // This is the most dangerous. The code will build just fine, but when it runs, it will behave differently depending on the computer and the compiler used.
    // This is the most dangerous because it might be happening and you would have no idea
    string s = "Hello";
    cout << s[10] << "\n"; // example: invalid memory access
    // Sometimes this will be a build error, sometimes this will be something random. It might even look correct
    return 0;
}
