// what is the output?

#include <iostream>

using namespace std;

double g(double& d1, double& d2, double d3){
    cout << d1 << ' ' << d2 << ' ' << d3 << endl;
    d2 += 3;
    d3 += 1;
    d1 *= d3;
    cout << d1 << ' ' << d2 << ' ' << d3 << endl;
    return d1+d2+d3;
}

int main(){
    double a = 1.1, b = -4, c = 2;
    double ans = g(a,b,c);
    cout << "ans = " << ans << endl;
    cout << a << ' ' << b << ' ' << c << endl;
    return 0;
}
