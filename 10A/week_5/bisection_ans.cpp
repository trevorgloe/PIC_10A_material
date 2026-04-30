#include<iostream>
#include<cmath>
/*
Lets use the bisection method to find the minimum of a function
This is a simple method from optimization to find the minimum of a unimodal function
*/

using namespace std;

float f(float x) {
    // 4x^2 - 3x^3 + x^2 + x
    return 4*pow(x, 4) - 3*pow(x,3) + pow(x,2) + x;
}

float fp(float x) {
    return 16*pow(x,3) - 9*pow(x,2) + 2*x + 1;
}

int main() {
    float left = -10;
    float right = 10;
    float mid = 0; 
    float der = 100;
    while (abs(der) > 1e-5) {
        mid = (left + right) / 2.0;
        if (fp(mid) < 0.0) {
            left = mid;
        } else {
            right = mid;
        }
        // cout << "New left if " << left << " new right is " << right << "\n";
        der = fp(mid);
        cout << "Approximate minimum is " << f(mid) << "\n";
    }
    cout << "Final minimum is " << f(mid) << " at " << mid << "\n";
    return 0;
}
