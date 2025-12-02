#include <iostream>

struct C {};

std::ostream& operator<<(std::ostream& out, const C& c) { return out; }

int main() {
	C c;
	std::cout << c << 28 << c; // line 8
	// operator<<(std::cout, );
	// std::cout.operator<<(28);
	operator<<(operator<<(std::cout, c).operator<<(28), c);
	std::cout << std::endl;
	return 0;
}
