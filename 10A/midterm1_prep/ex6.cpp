/*
What is the problem with the following code?
Hint: What will the output be?
*/

#include<iostream>

using namespace std;

int main() {
    const int A = 42;
    double a, b, c;
    a = 2;
    b = a + c;
    int i = (a + c) / b;
    cout << "a=" << a << " b=" << b << " c=" << c << " i=" << i << "\n";
    return 0;
}
