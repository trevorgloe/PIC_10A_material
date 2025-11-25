#include<iostream>

struct M {
	int* p;
	M() : p(new int(0)) {};
	M(const M& right) : p(new int(0)) {
		std::cout << "copy constructor" << "\n";
	}
};

int main() {
	M m1;
	M m2;
	{
		std::cout << m1.p << "\n";
	}
	return 0;
}

