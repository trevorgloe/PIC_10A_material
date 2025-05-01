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
    // references
    //
    // We can allow our functions to make changes to the variables in the main scope by using "pass-by-reference" rather than "pass-by-value"
    // First we need to understand what a reference is
    int a = 1;
    int& ra = a; // reference to variable a
    // now we can do with ra anything we'd do with a
    cout << a << " with reference " << ra << "\n";
    a++;
    cout << a << " with reference " << ra << "\n";
    
    // when we pass-by-value, the vaiable isn't changed
    plus_plus(a);
    cout << a << "\n";

    // Header files
    // We so far have put all the functions in the same file, but this doesn't make sense for a really big project

    string s = "Everything changed";
    cout << first_a(s) << "\n";

    return 0;
}
