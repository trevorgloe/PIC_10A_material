#include<iostream>

// What is the output of the following code?
// Why do we have const describing the input into the += operator overload?
// Why does diff() have const behind it? What would happen if we removed it?
// Why does print() have const behing it? What would happen if we removed it?
// Why does operator+= return by reference?
using namespace std;

class A {
private:
	int a;
	int b;
public:
	A(int a_, int b_) : a(a_), b(b_) {};

	int diff() const {
		return a-b;
	}

	void print() const {
		cout << a << " " << b << "\n";
	}

	A& operator+=(const A& right) {
		a += right.diff();
		b -= right.diff();
		return *this;
	}
	
};

int main() {
	A p1(1,2);
	A p2(4,2);
	p1.print();
	p2.print();
	p1 += p2;
	p1.print();
}
