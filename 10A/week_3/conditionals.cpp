// If statements!

#include <iostream>

using namespace std;

int main() {
    // if statements are examples of "control flow", which is ways of telling the computer to only run certain parts of the code
    // 2 types of control flow we will talk about: conditionals (if statements) and loops
    // if statements are desired to exactly solve the problem that you all have already seen in your homework:
    // you want something different to happen in the code when the user enters something weird
    // this is called "error handling" and if statements are great at that
    int i;
    cout << "Please enter and integer, and I will double it" << "\n";
    cin >> i;

    // we want to check if the user actually entered an integer
    if (cin.fail()) {
        cout << "That is not an integer" << "\n";
    } else {
        cout << "Your number doubled: " << i*2 << "\n";
    }

    // generally, an if statement looks like if (boolean) { stuff }
    // few things to note:
    // 1. We do not need the else
    int a = 23;
    if (a % 2 == 0) {
        cout << a << " is even" << "\n";
    }
    // 2. If we want to check another condition if the first one isn't true we can use an "else-if" 
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
    // we can examine what is going on with a lot of if statements using a flow chart (show flow chart)

    // Instead of checking for conditions separately, we can combine multiple conditions together
    cout << "Give me a character" << "\n";
    char c;
    cin >> c;
    if (c > 96 && c < 123) {
        // this is a lower-case character
        cout << "That is a lower-case letter" << "\n";
    }
    // Note that whhile the indentation here is not actually necessary for the code to work, you should ALWAYS use indentation like this, otherwise the code is not readable
    // Aside: the way that I put the curly brace on the same line as the if statement:
    // if (condition) { ... 
    // That is called "Allman" style (sometimes referred to as or ANSI)
    // The other common style is called K&R (Kerighan and Ritchie) which looks like
    if (c > 96) 
    {
        cout << "This is K&R style indentation" << "\n";
    }

    return 0;
}
