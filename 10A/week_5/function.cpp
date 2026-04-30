// How functions work

#include <iostream>

using namespace std;

/** 
This function takes the max of 2 ints

@param : a one integer input
@param : b another int input
@return : the maximum
*/
int my_max(int a, int b) {
    // take the maximum of 2 ints
    // a += other_int;
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    // Lets talk about functions
    // functions are ways that you can organize a snippet of code that you will likely need to use over and over again in different places
    // why use functions?
    //  1. If you want to do something a bunch of times and make sure its exactly the same
    //  2. Readability!
    //  A word abput readability:
    //  Why do we use high level languages like C++ that have words like "int" and "bool" rather than just writing binary? Because code is written to be understood by other HUMANS, not just by the computer. When you write code, readability is often MORE important than correctness. This is not to say that correctness is important, but correctness can be fixed easily if your code is readable. Readability cannot be fixed easily, regardless of how correct your code is    
    //  Many people think that their code will not be read by anyone other than themselves, but you should NEVER assume this; the development, and academic world are increasingly more collaborative, and it is highly unlikely that nobody else will look at your code. Plus there is always someone that could look at your code: you in a few months/years. Readability is not just about other people understanding your code, it is to help yourself understand your own code.
    //  It is not uncommon as a developer to spend upwards of 20-30% of your time just on documentation and making sure code is readable
    //  Using functions with clear names that convey what the function does and what the inputs are, along with good comments are vital to readable code.

    // call max function
    int a = 2;
    int b = 10;
    int other_int = 1;
    int c = my_max(a, b);
    cout << c << "\n";
    // some terms: 
    //  parameter: in the case of my_max, the parameter is an int called a, regardless of how the function is called
    //  argument: the actual value passed into the function, if I called my_max(1,2), the arguments are 1 and 2
    
    // function scope
    // The scope of a function is a little bit different than a regular scope that we've seen. The function scope ONLY has access to the parameters of the function, nothing in the main scope

    return 0;
}
