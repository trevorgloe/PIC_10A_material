#include<iostream>
#include<cmath>

/*
Identify a potential problem with this code? Is there some situation that could cause the code to not work as intended?
*/

using namespace std;

int main() {
    int input;
    cout << "Type an integer: ";
    cin >> input;
    if (cin.fail()) {
        return 0;
    }

    while (input != 0) {
        cout << "subtract 2: " << (input -= 2) << "\n";
    }
    return 0;
}
