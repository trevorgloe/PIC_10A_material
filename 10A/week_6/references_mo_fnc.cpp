#include<iostream>
#include<string>

using namespace std;

void plus_plus(int& i) {
    ++i;
}

// pure function
int pure(int i) {
    return i * i + 1;
}

// procedure
void procedure(int& i) {
    i *= i;
    i += 1;
}

int main() {
    // We are now equipt to talk about the 2 kinds of functions in C++: pure functions and procedures
    // before that, lets talk about references
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

    // reference to const (sometimes called a const reference)
    // These are a bit weird because they ACT like the reference is to a const variable, regardless of whether the reference actually is to a const variable
    float d = 2.323;
    const float& dr = d; // we can't update dr even though d is not read only
    d += 1; // allowed
    // dr += 1; // not allowed
    
    // 2 types of functions
    // A pure function is a function that takes everything in by value, and returns something by value. It does not actually change any of the parameters (sometimes called side-effects)
    // A procedure is a function that doesn't return anything and just modifies the arguments passed in
    // Procedures are much more memory efficient (no copying), which can often make them faster. Pure functions are often easier to understand what they are doing (everything is very explicit) and work more like mathematical functions. Some people think that all functions should be pure functions, which is a paradigm called functional programming. 
    // But, due to the efficiency, procedures are more the norm, and are part of a paradigm called object-oriented programming. C++ was created mainly for this paradigm, although some hispters still prefer functional programming in C++.
    return 0;
}
