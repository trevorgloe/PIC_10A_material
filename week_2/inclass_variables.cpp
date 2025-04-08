// variables in c++

#include <iostream>

using namespace std;

int main() {
    // we've already used variables a lot, but lets go through carefully now
    int a = 1; // integer variable with the value 1
    //
    // This is really doing 3 different things
    // 1. Declaring a variable that is an int
    // 2. Defining a variable that is an int and has the name "a"
    // 3. Initialize the variable to be the value 1 (asigning the value)
    int b; // declare and define the variable without initializing it
    cout << b << "\n";
    // where is the number coming from?
    // to the computer "empty space" is just bits that it knows aren't important
    // this is an example of UNDEFINED BEHAVIOR

    // the const keyword
    // if there is a value we don't want to change later, we make it const
    const float PI = 3.14159265;
    float radius = 7.35;

    // now we can use pi in our calculation
    cout << "The area of our circle is " << PI * radius * radius << "\n";

    // we can't now change the value of PI
    // PI += 1;
    //
    // Some other types!
    // bools
    // a "boolean" is a variable that is just true or false
    bool t = true;
    // This seems unhelpful because an int can already caputure this
    cout << t << "\n";
    cout << "The bool is size " << sizeof(t) << "\n";
    // the bool is 1 byte (8 bits)
    // the benefit is "readability"
    // we can asign a bool usign a "conditional operator"
    t = (2 == 2); // if the two things being compared ARE equal, then true
    cout << "The statement is " << t << "\n";
    bool s = (radius < PI); // less than
    cout << "The other statement is " << s << "\n";

    // comment: readability
    // one of the most important concepts in programming
    // Most of the time, you really want your code to be understood by other people
    // For example, lets say I wanted to check whether a height was greater than 6 or something; a BAD way to do this would be to just store an integer
    int thing = 1; // 1 if the height is tall enough, 0 otherwise 
    // a better way would be 
    bool check = true; 
    // now they know IMMEDIATELY that "check" is only true or false and its checking something
    //
    // casting
    // lets say we want to convert a variable of one type to another
    // float -> int
    int int_rad = static_cast<int>(radius);
    cout << "int version of radius " << int_rad << "\n";

    // we can go from a char to an int
    char p = 'p';
    int int_p = static_cast<int>(p);
    cout << "int version of p " << int_p << "\n";

    // casting to a bool
    int my_number = 45;
    bool bool_my_number  = static_cast<bool>(my_number);
    cout << bool_my_number << "\n";
    // every number except 1 will be cast to true (0 will be false)
    //
    // technically when we do this trick
    char letter = 89;
    cout << "The char 89 is " << letter << "\n";
    // the computer is casting 89 to a char behind the scenes
    // This is whats called "implicit casting", but it should be avoided when possible because, you guessed it....
    // READABILITY
    return 0;
}
