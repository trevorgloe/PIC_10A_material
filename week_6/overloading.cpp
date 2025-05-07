// Function overloading and how functions are resolved

#include <iostream>
#include <vector>
#include <cmath>
#include "overload_fnc.hpp"

using namespace std;


/**
computes the value of cosine of the angle in either degrees or radians

@param theta : the input angle
@param rad : bool indicating whether the given angle is in degrees or radians
@return : cosine of the angle
*/
double cos(double theta, bool rad) {
    if (rad) {
        return cos(theta);
    } else {
        return cos(3.141593 * theta / 180.0);
    }
}

int main() {
    // Overloading functions
    // there are a lot of motivating examples for why you would want to overload a function, but here is an interesting one
    // the cmath library has a function cos, which computes the cosine of a given angle
    double theta = 0.231;
    cout << "cosine of " << theta << " is " << cos(theta) << "\n";
    // this will be the cosine of the angle in radians
    // but what if I want it in degrees and I don't want to have to call a function with a longer name (cos is just such a good name)
    // thats where overloading comes in
    // since we defined our own function now we can compute cosine in radians or degrees
    cout << "cosine of 3.14/2 radians is " << cos(3.14/2.0, true) << "\n";
    cout << "cosine of 45 degrees is " << cos(45, false) << "\n"; 

    // we have defined our functions by overloading so we can call the same named function with either a double vector or an int vector and BOTH will work
    vector<double> v = {1.2, 3.2, 3.1}; 
    sq(v);
    print(v);
    vector<int> w = {1, 2, 3, 4, 5};
    sq(w);
    print(w);
    // how clean is that??? 
    // This is by far the most common use case of overloaded named functions - making it work with multiple kinds of inputs

    // Resolving function calls
    // An important note here is that we CANNOT make two functions with the same input arguments (show example)
    // This is because the compiler will not know which one to choose when we call the function
    // However, casting is allowed (see function f in file)
    f(1, 2);
    int a = 1;
    f(a, a); // even this is ok because we passing by value so it can cast
    // f_ref(a, a); // if we tried to pass by reference it couldn't cast it
    // how about here?
    g(1,1);
    g(1,1.0); // this kinda makes sense here because the FIRST g is a better match as it would not have to do any casting
    // when there are multiple overloaded functions to choose from, the compiler does a 3 step process to determine which function to go with 
    // 1. Creates the set of cadidate functions (just all the functions with that name in these cases)
    // 2. Trims down the set to all the viable functions (the ones which have the right number of arguments, feasible casting, etc.)
    // 3. Determines the single best viable function based on which one has either less casting or better casting
    // Its worth noting that the compiler is not perfect about this, and some cases, it will not be able to decide, even when we would intuitively know which one to go with

    return 0;
}
