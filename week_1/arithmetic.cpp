/* 
Arithmetic operations in C++

* */

#include <iostream>
#include <cmath>

int main() {
    // C++ is what is called "strongly typed" meaning that whenever we do
    // any sort of operation, the type of object we are working with maters
    // The first type of number we will work with is an integer (or int)
    // Integer operations
    // In C++ we have all our typical math operations (+,-,*,/) 
    // for integers, when we combine two, we get another integer
    std::cout << 1 + 2 << "\n";
    std::cout << 2 - 3 << "\n";
    std::cout << 2*0 << "\n";
    std::cout << 4/2 << "\n";

    // however, integer division works different than mathematical division
    std::cout << 1/2 << "\n";
    // that is because it HAS to return and integer, so it will chop off the non-integer
    // part of the expression 
    std::cout << -5/6 << "\n"; // if it were rounding this would become -1 but it instead becomes 0
    //
    // one more operation that is less familiar is the modulo operator
    // This operator is done via % and satisfies a = (a / b) * b + a % b 
    // Mathematically, this expression doesn't make sense but because c++ chops off the decimal part of a/b, a % b is an often nonzero expression
    std::cout << 4 % 2 << "\n";
    std::cout << 6 % 4 << "\n"; // for positive integers, this is the remainder after dividion
    std::cout << -3 % (-2) << "\n"; // for negative integers, it is not always
    // but it is a - (a/b)*b
    std::cout << -3 - (-3 / -2 ) * (-2) << "\n";

    // If we want decimal numbers we need to work with floats (floating point numbers)
    std::cout << 1.0 / 2 << "\n"; // note how even if one of the inputs is a float and the other is an int, the output is a float
    // great! now we have decimals, but a computer cannot store infinitely many numbers 
    // as a small digression, the computer stores data in bits (1s and 0s)
    // 8 bits is called a byte and the amount of memory a variable takes up is measured in bytes
    // we can use the "sizeof" operation to get the size of different data types
    // before doing this, we need to define a variable, which we'll talk about more in detail later
    int integer = 1;
    float number = 1.0;
    std::cout << "the integer 1 is size " << sizeof(integer) << "\n";
    std::cout << "the float 1.0 is size " << sizeof(number) << "\n";
    // so our float is 4 bytes of data (32 bits)
    // meaning that is only have finitely many different values is can take
    // we can beef it up with a double, which will take twice the memory but have twice as many values it can take
    double big_number = 1.0;
    std::cout << "the double 1.0 is size " << sizeof(big_number) << "\n";
    // if we want to see the limit of floats we can try out this
    // float a;
    float a = 1.0 + 0.000000000000000001;
    float b = (a - 1.0) * 10000000000000000;
    std::cout << a << "\n"; 
    std::cout << b << "\n";
    std::cout << a - 1.0 << "\n";

    // one more integer operator, increment
    int i = 0;
    std::cout << i << "\n";
    i++;
    std::cout << i << "\n";
    ++i;
    std::cout << i << "\n";
    // so ++i and i++ both increment the integer by 1
    // it is a shortcut for i += 1
    // the different between the two is when the variable is asigned the value (you don't really need to worry about this subtlty
    // WARNING: using ++ twice in 1 expression will lead to undefined behavior and should be avoided
    // 
    // In general, any of our arithmetic operations can be used as += to mean 
    // a *= 2  ->  a = a*2
    return 0;
}
