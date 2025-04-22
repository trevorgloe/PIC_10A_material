// Create a program that defines a const int n and then draws a triangle
// of stars with that many stars along the bottom

#include <iostream>

using namespace std;

int main() {
    // define our const int
    const int n = 3;
    
    // first do the first line which just has 1 star
    // make n-1 spaces
    for (int i=0; i < n-1; i++) {
        cout << " ";
    }
    cout << "*";
    cout << "\n"; // end the line

    // now for the rest of the n-2 lines (until the bottom), we will have 2 stars
    for (int j=0; j < n-2; j++) {
        // the first star will be n-j-2 spaces out
        for (int k=0; k < n-j-2; k++) {
            cout << " ";
        }
        cout << "*";
        // the second star will be 2*j+1 spaces away
        for (int k=0; k < 2*j+1; k++) {
            cout << " ";
        }
        cout << "*";
        cout << "\n"; // new line
    }

    // now the last line is just a line of 2*n-1 stars
    for (int l=0; l < 2*n -1; l++) {
        cout << "*";
    }
    cout << "\n";
    // star!


    return 0;
}
