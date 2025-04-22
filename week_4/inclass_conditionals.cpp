// If statements!

#include <iostream>

using namespace std;

int main () {
    // If statements can solve a particular problem that some of you have encountered
    int i;
    cout << "Please enter an integer, and I wil double it" << "\n";
    cin >> i;
    
    if (cin.fail()) {
        cout << "That is not a number" << "\n";
    } else {
        cout << "Your number doubled: " << i*2 << "\n";
    }

    // we do not need the else part
    int a = 23;
    if (a % 2 == 0) {
        cout << a << " is even" << "\n";
    }

    // If we want to check another condition before exiting we can use the 
    // else if
    int b;
    cout << "Enter another number" << "\n";
    cin >> b;
    if (b % 2 == 0) {
        cout << b << " is even" << "\n";
    } else if (b % 3 == 0) {
        cout << b << " is divisible by 3" << "\n";
    } else {
        cout << b << " is not divisible by 2 or 3" << "\n";
    }

    // Instead of checking multiple conditions separately, we can combine multiple conditionals
    cout << "Give me a character " << "\n";
    char c;
    cin >> c;
    if (c > 96 && c < 123) {
        // this is checking if c is lower-case
        cout << "That is a lower-case letter" << "\n";
    }

    // The way that I put the curly braces is called "Allman" style
    // the other popular style is called "K&R" (Kerighan and Ritchie)
    // this is K&R
    if (c > 96)
    {
        cout << "Thing";
    }

    return 0;
}
