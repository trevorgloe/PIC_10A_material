#include <iostream>

struct Rational {
Rational(int n, int d) : num(n), den(d) {}
int num;
int den;
operator double() { return num / den; }
operator double() const { return static_cast<double>(num) / den; }
}; // line 11

int main() {
Rational a(1, 2);
std::cout << static_cast<double>(a) << ' '; // line 15
const Rational b(1, 2);
std::cout << static_cast<double>(b) << std::endl; // line 18
return 0;
}
