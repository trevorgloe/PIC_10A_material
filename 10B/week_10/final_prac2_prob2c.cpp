#include <iostream>

struct C {
	C(int _i) : i(_i) {}
	const int& operator[] (size_t) const { std::cout << "a "; return i; }
	int& operator[] (size_t) { std::cout << "m "; return i; }
	int i;
};

int main() {
	C c(0); c[1] = 2;
	std::cout << c[3] << std::endl;
	return 0;
}
