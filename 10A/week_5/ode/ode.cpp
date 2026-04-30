#include<iostream>
#include<fstream>
/*
This file will numerically solve and ODE
Lets modify it to make the ode be given by dy/dt = y (autonomous)
*/

using namespace std;

float f(float t) {
    return t*t - t + 1;
}

int main() {
    ofstream output;
    output.open("data.txt");
    
    float t = 0.0;
    float delta = 1e-3;
    const float T = 2.0;
    float x = 0.5;
    while (t < T) {
        x = x + delta * f(t);
        t = t + delta;
        output << x << " ";
    }
    return 0;
}
