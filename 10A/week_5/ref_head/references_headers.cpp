// references and header files

#include <iostream>
#include <string>
#include "functions.hpp"

using namespace std;

/** 
Function (procedure) to increase the value of the given int by 1

@param : input integer
*/
void plus_plus(int& i) {
    i++;
}

int main() {
    // References
    // we saw before that when we pass some variables into a function, the function itself cannot change those variables in the main scope
    // However, this does not have to be the case!
    // We can "pass-by-reference" rather than "pass-by-value
    // To see this in action, first you need to understand a reference
    int a = 1;
    int& ra = a; // reference to integer a
    // now we can use ra just as we would a
    cout << a << " with reference " << ra << "\n";
    ra++;
    cout << a << "\n";

    // now when a is changed, ra will reflect that change
    // if we put a reference as the input to a function, we can then "pass-by-reference" into the function and the functions changes on the variable will be reflected in the outter scope
    plus_plus(a);
    cout << a << "\n";
    // Yay! we can change variable in the outter scope in our functions now

    // there are a few quirks to references that we'll expand upon later in the course but a simple one to look our for is that you can't aside a literal to a reference
    // int& b = 1 
    // that code will not work because we would be asking to reference the memory location of a variable literal, which is not allowed
    // the reasons for this is a discussion for PIC10B

    // Header files
    // Putting all of our functions in the same file is great and all, but it starts to become really intractable when we have more complicated programs
    // in general, we may want to spread our functions out across multiple files
    // in basically all real-life programs, this is done excessively
    // once we've included our header we can use the functions
    string s = "Everything changed when";
    cout << first_a(s) << "\n";
    return 0;
}
