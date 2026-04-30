#include<iostream>
#include<cmath>
/*
Lets use the bisection method to find the minimum of a function
This is a simple method from optimization to find the minimum of a unimodal function
*/

using namespace std;

float f(float x) {
    // 4x^4 - 3x^3 + x^2 + x
    return 4*pow(x, 4) - 3*pow(x,3) + pow(x,2) + x;
}

float fp(float x) {
    // 16x^3 - 9x^2 + 2x + 1
    return 16*pow(x,3) - 9*pow(x,2) + 2*x + 1;
}

int main() {
    float left = -10;
    float right = 10;
    // steps of the bisection method
    // compute the derivative of f at the midpoint of the interval
    // if its positive, the minimum is to the left, if negative, the minimum is to the right
    // the left/right half of the interval becomes the new interval, repeat
    // Do this until the derivative is very small
    float mid = 0.0;
    while (abs(fp(mid)) > 1e-6) {
        mid = (left + right) / 2.0;
        if (fp(mid) > 0.0) {
            right = mid;
        } else {
            left = mid;
        }
        cout << "Current min is " << mid << "\n";
        cout << "Current derivative is " << fp(mid) << "\n";
    }
    cout << "minimum is " << mid << " with value " << f(mid) << "\n";
    return 0;
}
