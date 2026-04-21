#include<iostream>
#include<string>

using namespace std;

int main() {
    int i;
    cout << "Please enter an integer\n";
    cin >> i;

    if (cin.fail()) {
        cout << "That is not an integer\n";
    } else {
        cout << "Your number double: " << i*2 << "\n";
    }

    int a = 23;
    if (a % 2 == 0) {
        cout << a << " is even\n";
    }

    if (a % 3 == 0)
        cout << a << " is even\n";
        cout << "hello\n";
    
    int b;
    cout << "enter another number\n";
    cin >> b;
    if (b % 2 == 0) {
        cout << "b is even\n";
    } else if (b % 3 == 0) {
        cout << "b is divisible by 3\n";
    } else {
        cout << "b is not divisible by 2 or 3\n";
    }

    // && - and
    // || - or
    char c = 'a';
    if (c > 96 && c < 123) { // Allman style
        cout << "c is lower-case\n";
    }

    if (a == 1) // K&R style
    {

    }
    return 0;
}
