/*
What is the output of the following code?
*/

#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int a = 1;
    int b = 2;
    cout << a / b << "\n";
    
    double d = static_cast<double>(pow(b,2)) / static_cast<double>(b + 1);
    cout << d << "\n";
    cout << (static_cast<int>(2 * d) == 2) << "\n";
    cout << (static_cast<int>(d) == round(d)) << "\n";
    cout << (static_cast<int>(d) == ceil(d)) << "\n"; // recall that ceil(d) returns the smallest int larger than d
    double d2 = -1.5;
    cout << (static_cast<int>(d2) == ceil(d2)) << "\n";
    return 0;
}
