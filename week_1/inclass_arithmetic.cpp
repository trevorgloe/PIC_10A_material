/*
* Arithmetic operations in c++
* and numerical data types
*/


#include <iostream>

int main() {
    // Interger operations
    std::cout << 1 + 2 << "\n";
    std::cout << 2 - 3 << "\n";
    std::cout << 2 * 0 << "\n";
    std::cout << 4 / 2 << "\n";

    // integer division work a little different than mathematical division
    std::cout << 1/2 << "\n";
    std::cout << -5/6 << "\n";
    
    // The modulo operation
    std::cout << 4 % 2 << "\n";
    std::cout << 6 % 4 << "\n";

    // for negative integers its NOT the same as remainder
    std::cout << -3 % (-2) << "\n";

    // Floats
    std::cout << 1.0 / 2 << "\n";

    // the sizeof operation tells us how much space the data is taking
    int integer = 1;
    double number = 1.0;
    std::cout << "the integer 1 is of size " << sizeof(integer) << "\n";
    std::cout << "the double 1.0 is size " << sizeof(number) << "\n";

    // when the magnitude of numbers gets really small, the numerical precision, comes into play
    float a = 1.0 + 0.000000000000000001;
    float b = (a - 1.0) * 10000000000000000;
    std::cout << b << "\n";
    std::cout << a << "\n";

    // another integer operator: increment
    int i = 0;
    std::cout << i << "\n";
    i++; // shortcut for i += 1
    std::cout << i << "\n";
    ++i;
    std::cout << i << "\n";
    // WARNING: using ++ twice in the same expression can lead to undefined behavior
    //
    // ++i++
    i += 2;
    // in general any arithmetic operation can be put before = to make it reasign the value
    // i *= 2
    // i -= 2
    // i %= 2
    return 0;
}

