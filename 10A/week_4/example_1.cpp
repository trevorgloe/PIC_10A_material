// Lets make a program that defines a const int n and then draws a triangle of stars with 
// that many lines

#include <iostream>

using namespace std;

int main() {
    // define our const int
    const int n = 4;

    // first do the line with a single star
    // make n
    for (int i=0; i < n; i++) {
        cout << " ";
    }
    cout << "*";
    cout << "\n";

    // now for other lines
    // there will be n-2 in between lines
    for (int i = 1;i <= n-2; i++) {
        // we need to draw 2 stars
        // the first star should be n-i-3 spaces out
        for (int k=0; k < n-i-1; k++) {
            cout << " ";
        }
        cout << "*";

    }

    return 0;
}
