#include <iostream>
struct Rational {
Rational(int n) : num(n), den(1) {}
Rational(int n, int d) : num(n), den(d) {}
int num;
int den;
operator double() const { return static_cast<double>(num) / den; }
bool operator==(const Rational& other) const {
return num * other.den == other.num * den;
}
};
int main() {
Rational r(1, 2);
std::cout << std::boolalpha << (r == 0) << std::endl;
return 0;
}
