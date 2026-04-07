#include<iostream>
#include<cmath>

/*
    Lets make some code to verify some trigonometry
    First lets verify that cos(x) = sin(x+pi/2) (together)

    Then verify the identity
    cos(3*x) = 4*cos^3(x) - 3*cos(x)
*/
using namespace std;

int main() {
    const float PI = 3.14159265;
    
    const float testx1 = .245;
    const float testx2 = 2.453;
    const float testx3 = 1.232;
    bool b1 = cos(testx1) == sin(testx1 + PI/2);
    bool b2 = abs(cos(testx2) - sin(testx2 + PI/2)) < 1e-4;
    // bool b2 = cos(testx2) == sin(testx2 + PI/2);
    bool b3 = cos(testx3) == sin(testx3 + PI/2);
    cout << b1 << " " << b2 << " " << b3 << "\n";

    return 0;
}
