// Scope and loops

#include <iostream>

using namespace std;

int main() {
    // A "scope" is basically a way of saying what variables the computer has access to at the time
    // for example, why does my IDE not like this?
    if (true) {
        int i = 0;
    }

    // cout << i << "\n";
    
    // just because a variable is temporary, doesn't mean it can't have a lasting effect
    int j = 0;
    {
        int i = 2;
        // what if I add this?
        int j = 0;
        // this is called variable masking or variable shadowing
        j++;
        j *= i;
    }
    cout << j << "\n";

    // practice example, whats wrong with this code?
    cout << "Tell me your high school class score, and I'll tell you your letter grade" << "\n";
    int score;
    cin >> score;
    char grade;

    if (score >= 90) {
        grade = 'A';
    } else if (score >= 80) {
        grade = 'B';
    } else if (score >= 70) {
        grade = 'C';
    } else if (score >=60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    cout << "Your grade is " << grade << "\n";
    
    // while loops
    // a loop is just a way to repeat some block of code
    int a = 25;
    while (a > 10) { // keep executing the code below until the boolean is false
        cout << a << "\n";
        a -= 2;
    }

    cout << "with break statement" << "\n";
    // we can stop the loop using a break statement
    int b = 35;
    while (b > 10) {
        cout << b << "\n";
        b -= 2;
        // stop if b is divisible by 7
        if (b% 7 == 0) {
            break;
        }
    }

    // another style for this is the 
    // do-while loop
    cout << "Do while style" << "\n";
    int d = 10;
    do {
        cout << d << "\n";
        d += 3;
    } while (d < 8);
    // WARNING: If youre not careful the code in the while loop might run infinitely, make sure either the boolean will become false, or there is a break
    //
    //
    // for loop
    // when you want a block of code to run a pre-determined number of times
    // compute 7!
    int tot = 1;
    for (int i = 1; i <= 7; i++) {
        tot *= i;
    }
    cout << "7 factorial is " << tot << "\n";
    // there is a subtle difference between this and...
    int tot2 = 1;
    int jj = 1;
    while (jj <= 7) {
        tot *= jj;
        jj++;
    }
    return 0;
}
