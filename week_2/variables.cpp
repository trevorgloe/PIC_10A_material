/* 
* Working with variables in C++
*/

#include <iostream>

using namespace std;

int main() {
    // we have already used variables a bit so far, but lets talk about some quirks with variables
    // you probably remember that this code will create a variable a
    int a = 1; // integer variable, with the value 1
    //
    // This is really 3 different things:
    // 1. Declaring a variable that is ann int
    // 2. Defining a variable that is an int and has a name
    // 3. Initializing the variable to be the value 1
    // what if we tried to use the variable before initializing it?
    int b; // declares and defines a variable WITHOUT initializing it
    cout << b << "\n"; // well that was weird
    // basically the code looked at an "empty" place in my computers memory and printed whatever bits were there as an integer (weird)
    // so DON'T do this, because it will basically just print a random number
    // this is an example of UNDEFINED BEHAVIOR
    
    // when we set a variables value we are "asigning the variable
    float radius = 7.35;
    // but for values which we don't want to be able to asign later, we use the const keyword
    const float PI = 3.14159265;
    // now we can use PI in calculations
    cout << "The area of the circle is " << PI * radius * radius << "\n";
    // but we can't change the value of pi once its set
    // PI += 1; // will error
    // The error we get is that the variable is "read-only" - this is a term that comes up a lot when talking about the computer's memory
    // The term is fairly self-explanitory but in a nutshell the keyword tells the compiler that the memory it allocates for the variable PI should not be altered once initialized, it should only be read
    //
    // Some other variable types!
    // chars
    // we already saw strings and how C++ cannot interpret them natively
    // but C++ does have support for a single letter, or "character
    char p = 'p';
    // and we can print chars exactly how we'd like
    //
    // bools
    // a "boolean" is a variable that is just true or false
    bool t = true;
    // this might seem unhelpful because an int could capture this by just being 1 or 0 but the utility comes down to the "readability"
    cout << "The bool is size " << sizeof(t) << "\n";
    // heres a thought, why is it not 1 bit? Thats all we would really need
    // ... well that has to do with the fact that way back people decided that a byte was the smallest unit of memory and the computer cannot manipulate memory on the scale of less than 1 byte, so we gotta use 8 bits to represent true or false
    // the way we would generally asign a bool is with a "conditional operator", something like this
    t = (2 == 2);
    cout << "The statement is " << t << "\n";
    bool s = (radius < PI); // less than
    cout << "Is the radius less than PI? " << s << "\n"; // note that this prints 0 or 1, not true or false
    // Comment: I will use this word "readability" very often, and this is one of the most IMPORTANT concepts in programming
    // It seems obvious but most of the time, you really want another person to be able to understand what your code is doing or supposed to do
    // For example, if I wanted to write code that would check whether a height was above 6 or not, a BAD way to do it would be to use an int, called thing
    int thing = 1; // set it to one or 0 based on the height
    // But if somebody was trying to understand what my code was doing they would have NO IDEA what "thing" is or what number it is supposed to represent, however, if I used
    bool check = true;
    // then a person reading my code would be able to understand that "check" is only every going to be 1 or 0 and that it is checking something
    //
    // casting
    // lets say we want to convert a variable of one data type to another, this is done via "casting"
    // for example lets say we have a float and we want it to be an int from now on
    int int_rad = static_cast<int>(radius);
    cout << "The int version of the radius: " << int_rad << "\n";
    // remember how the char variable is just a number in memory (understood with the ASCII table?)
    // well we can et that number via casting
    int int_p = static_cast<int>(p);
    cout << "The int version of p: " << int_p << "\n";
    // similarly, we can cast between floats and doubles
    float small_number = 0.000001;
    double other_sm_num = static_cast<double>(small_number);
    // or an int to a bool
    int my_number = 45;
    bool bool_my_number = static_cast<bool>(my_number);
    cout << "Casting 45 to a bool gives " << bool_my_number << "\n";
    // so everything that is not 0 just gives true

    // technically when we do something like
    char letter = 89;
    cout << "The char 89 is " << letter << "\n";
    // the compiler is casting the int 156 into a char under the hood
    // This is called "implicit casting" and should be avoided because, you guessed it...
    // READABILITY
    
    return 0;
}
