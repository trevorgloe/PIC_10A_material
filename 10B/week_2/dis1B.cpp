#include<iostream>
#include<functional>

class C {
public:
	int a;

public:
	C(int _a) : a(_a) {}
	// int& return_ref() const {
	// 	// int a = this->a;
	// 	// this->a++;
	// 	return a;
	// }
	void print() const {
		std::cout << a << "\n";
	}

	void increment() {
		a++;
	}
};

int passbyval(int a) {
	return a+2;
}

void passbyref(int& a) {
	a += 2;
}

int f(int x) {
	return x*x;
}

int call_f(std::function<int(int)> f, int a) {
	return f(a);
}

float integral(std::function<float(float)> f) {

	return 0;
}

class Func_to_integrate {
public:
	float evaluate(float x) {}
	bool in_domain(float x) 
};

int main() {
	// const C c;
	// c.return_ref();
	C c(1);
	c.increment();
	// const int& a = c.return_ref();
	// a++;
	return 0;
}
