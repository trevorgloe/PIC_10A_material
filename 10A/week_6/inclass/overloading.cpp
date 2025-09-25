// Overloading functions and resolving function calls

#include <iostream>
#include <vector>
#include <cmath>
#include "overload_fnc.hpp"

using namespace std;

/**
Computes the cosine in degrees or radians

@param theta : angle
@param rad : bool indicating whether we're in radians
@return cosine of the angle
*/
double cos(double theta, bool rad) {
    if (rad) {
        return cos(theta);
    } else {
        return cos(3.141593 * theta / 180.0);
    }
}

int main() {
    // overloading functions
    // cmath has cos, which computes the cosine of a given angle
    double theta = 0.231;
    cout << "The cosine of " << theta << " is " << cos(theta) << "\n";
    // what is we wanted to compute cos in degrees?
    cout << "The cosine of 3.14/2 radians is " << cos(3.14/2, true) << "\n";
    cout << "The cosine of 45 degrees is " << cos(45, false) << "\n";
    // resolving a function call - figuring out which version of the function you want

    // now its really clean to call them
    vector<double> v = {1.2, 2.1, 3.01};
    sq(v);
    print(v);

    vector<int> w = {1, 2, 3, 4};
    sq(w);
    print(w);

    // we can have implicit casting in our function calls
    f(1, 1);
    int a = 1;
    f(a, a);
    // f_ref(a, a);
    
    g(1,1);
    g(1,1.0);
    // The compiler resolves function calls in 3 steps
    // 1. Creates a set of candidate functions
    // 2. Trims down to the set of viable functions
    // 3. Determines the best viable function (least casting and easiest casting)
    return 0;
}
