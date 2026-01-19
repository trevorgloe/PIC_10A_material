#include<iostream>
#include<utility>

struct C {
	double* val;
	C() : val(new double(0.0)) {
		std::cout << "df: " << *val << std::endl;
	}

	C(double d) : val(new double(d)) {
		std::cout << "param: " << *val << std::endl;
	}

	C(const C& other) : val(new double(*other.val)) {
		std::cout << "copy: " << *val << std::endl;
	}

	C(C&& other) : C() {
		std::swap(val, other.val);
		std::cout << "move: " << *val << std::endl;
	}

	~C() {
		std::cout << "destroy " << *val << std::endl;
		delete val;
	}
};

struct D {
	C c;
	D(C _c) : c(std::move(_c)) {
		std::cout << "D constructor " << std::endl;
	}
};

int main() {
	C c(42.42);
	D d1(std::move(c));
	D d2(c);
	std::cout << "d3\n";	
	D d3(C{});
	std::cout << *c.val << "\n";
	std::cout << *d1.c.val << "\n";
	std::cout << *d2.c.val << "\n";
	std::cout << *d3.c.val << "\n";
	return 0;
}
