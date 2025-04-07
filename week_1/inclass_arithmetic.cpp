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
    std::cout << "the float 1.0 is size " << sizeof(number) << "\n";
    return 0;
}

