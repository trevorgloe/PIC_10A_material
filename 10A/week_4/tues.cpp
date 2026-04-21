#include<iostream>
#include<string>

using namespace std;

int main() {
    // A scope
    if (true) {
        int i = 0;
    }
    // cout << i << "\n";
    int j = 0; // defined in the main scope
    {
        int i = 2;
        int j = 10; // defined in the inner scope
        cout << j << "\n";
    }
    cout << j << "\n";
    int k = 0;
    {
        int k = 1;
        {
            // int k = 2;
            cout << k << "\n";
        }
    }
    cout << k << "\n";

    // whats wrong with this code?
    // cout << "Tell me your score, and I'll tell you your letter grade\n";
    // int score;
    // cin >> score;
    // char grade;
    // if (score >= 90) {
    //     char grade = 'A';
    // } else if (score >= 80) {
    //     grade = 'B';
    // } else {
    //     grade = 'F';
    // }
    // cout << "Your grade is " << grade << "\n";

    // loops!
    // while loops
    int a = 25;
    while (a > 10) {
        cout << a << "\n";
        a -= 2;
    }

    // break statement
    // cout << "With break statement\n";
    // int b = 35;
    // while (b > 10) {
    //     cout << b << "\n";
    //     b -= 2;
    //     if (b % 7 == 0) {
    //         break;
    //     }
    // }

    // do-while loop
    int c = 11;
    while (c > 10) {
        cout << c << "\n";
        c -= 2;
    }
    //WARNING: Make sure that the condition in the while loop EVENTUALLY becomes false

    // for loops
    // ex: compute 7 factorial
    // int tot = 1;
    // int i = 1;
    int tot = 1;
    int i = 1;
    for (int i = 1; i<=7; i++) {
        i *= i;
        cout << i << "\n";
    }
    // cout << i << "\n";
    tot = i;
    cout << "7 factorial is " << tot << "\n";
    return 0;
}
