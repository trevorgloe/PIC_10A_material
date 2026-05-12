/*
Does the following code produce and error? And why?
*/

#include<iostream>

int sq_pure(int i) {
    return i*i;
}

void sq_procedure(int& i) {
    i *= i;
}

using namespace std;

int main() {
    const int I = 10;
    cout << sq_pure(I) << "\n";
    sq_procedure(I);
    cout << I << "\n";
    return 0;
}
