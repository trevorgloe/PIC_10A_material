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
    return 0;
}
