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


    
    return 0;
}
