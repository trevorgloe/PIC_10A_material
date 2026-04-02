#include<iostream>

using namespace std;

const int& sq(int a) {
    return a*a;
}

int main() {
    int x = 4;
    // int x_cubed = x*sq(x);
    // int x_cubed = sq(x);
    cout << sq(x) << "\n";
    return 0;
}
