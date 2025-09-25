// Scope and Loops

#include <iostream>

using namespace std;

int main() {
    // A "scope" is a very important concept in computer science
    // it is basically a way of saying what variables the computer has access to at a certain time
    // for example, why does my IDE not like the following statement? 
    if (true) {
        int i = 0;
    }

    // cout << i << "\n"; the variable i is "out of scope"
    // once the curly braces close, anything that was created inside is destroyed
    // this is really useful for temporary variable, that you want to go away after you're done with them
    // and just because a variable is tempory, doesn't mean it can't have a lasting effect
    int j = 0; // declared in the "global scope"
    {
        // we can just create a scope whenever we want with curly braces
        int i = 2;
        // what is we add this? 
        int j = 0; // we've redefined j in the local scope
        // this is called variable masking or variable shadowing
        // it can be a bit confusing to read, but it is actually very useful in some settings, because variable names could otherwise get really really complicated
        // this is actually part of the reason why the concept of "namespaces" exist in c++ now, because otherwise, too many variables would have to be masked
        // I recommend avoiding masking unless you have to use it...it can make things confusing
        j++; // changes to j will now effect the "local" j, not the global one
        j *= i; // j will remember this

    }
    cout << j << "\n";

    // practice, whats wrong with this code?
    cout << "Tell me your high school class score, and I'll tell you your letter grade" << "\n";
    int score; 
    cin >> score;
    char grade;

    if (score >= 90) {
        char grade = 'A';
    } else if (score >= 80) {
        grade = 'B';
    } else if (score >=70) {
        grade = 'C';
    } else if (score >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    cout << "Your grade is " << grade << "\n";

    // while loops
    // this is a way for us to repeatedly run code until a certain condition is no longer met
    int a = 25;
    while (a > 10) { // keeps executing the below code until a is no longer greater than 10
        cout << a << "\n";
        a -=2;
    } // this is a really powerful tool, we can now basically have infinite copies of the same blurb of code until we're done with it

    cout << "with break statement";
    // we could also get out the loop in a different way, using a break statement
    int b = 35;
    while (b > 10) {
        cout << b << "\n";
        b -= 2;
        if (b % 7 == 0) {
            break;
        }
    }
    // a really similar thing is a do-while loop, which looks like
    cout << "Do while style " << "\n";
    int d = 10;
    do {
        cout << d << "\n";
        d += 3;
    } while (d < 31);

    // WARNING: If you're not careful, you might have code running that never makes the thing in the while condition false, meaning it will run infinitely until manually stopped or stopped with a break statement
    //
    
    // the other common type of loop we will use is a "for" loop
    // this is basically like a while loop but when you know exactly how many iterations you'll want to do
    // compute 7!
    int tot = 1;
    for (int i = 1; i <=7; i++) {
        tot *= i;
    }
    cout << "7 factorial is " << tot << "\n";
    // biggest difference between this and doing a while loop that increments i and checks for i <= 7 is that in the while loop setting, i would have to be in the global scope while in the for loop, i is in the local scope
    // there are some other weird differences but they shouldn't come up unless you're using for in a strange way (which you shouldn't)
        
    return 0;
}
