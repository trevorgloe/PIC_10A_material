/*
* Arithmetic operations in c++
* and numerical data types
*/


#include <iostream>

using namespace std;

int main() {
    // Integer arithmetic
    cout << 1 + 2 << "\n";
    cout << 2 - 3 << "\n";
    cout << 2*0 << "\n";
    cout << 4 /2 << "\n";
    
    // modulo
    cout << 4%2 << "\n";
    cout << 6 %4 << "\n";
    cout << 5 % 2 << "\n";

    // types
    int i = 1;
    float num = 0.102;
    double num2 = 0.102;
    cout << "size of float is " << sizeof(num) << "\n";
    cout << "size of double is " << sizeof(num2) << "\n";
    unsigned int j = 302;
    size_t s = 1;

    // increment and decrement
    i++;
    cout << i << "\n";
    i--;
    cout << i << "\n";
    // pre-fix and post-fix increment
    ++i; // pre-fix
    i++; // post-fix
    cout << i << "\n";
    cout << ++i << "\n";
    cout << i++ << "\n";
    // WARNING: dont use pre-fix and post-fix in the same expression (gives and error)
    // cout << 0.2 - 0.1 << "\n";

    float a = 0.1;
    a += 0.1;
    return 0;
}

