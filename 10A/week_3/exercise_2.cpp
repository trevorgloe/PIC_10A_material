// exercise 2
// what will the output of the following code be?

// get will grab the first character from the input buffer
// peek will get the first character from the input buffer WITHOUT deleting it from the buffer
//
#include <iostream>
using namespace std;

int main() {
    char ch1 = cin.get();
    char ch2 = cin.peek();
    char ch3 = cin.get();

    cout << ch1 << ' ' << ch2 << ' ' << ch3 << endl;

    return 0;
}
