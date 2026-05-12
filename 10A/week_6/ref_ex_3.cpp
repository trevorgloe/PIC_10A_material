// Is it better here to pass by reference or pass by value?
// why?
// How would you do either?

#include<iostream>

using namespace std;

float mandlebrot(float& x, float& c) {
    return x*x + c;
}
int main() {
    const int iterations = 400;
    float x = 0.0;
    float c = 0.2;
    for (int i=0; i<iterations; ++i) {
        x = mandlebrot(x, c);
    }
    cout << x << "\n";
    return 0;
}
