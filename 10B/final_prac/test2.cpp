#include<iostream>

using namespace std;

const int& sq(int a) {
    return a*a;
}
int main() {
    int x = 4;
    const int& x_squared = sq(4);
    // const int& x_to_the_4th = sq(sq(4));
    // int x_cubed = x * sq(x);
    cout << x_squared << endl;
    // cout << x_cubed << endl;
    // cout << x_to_the_4th << endl;
}
