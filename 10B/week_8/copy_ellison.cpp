#include<iostream>
#include<utility>

using namespace std;

class C {
public:
	C() { cout << "Default constructor\n"; }
	C(const C&) {
		cout << "Copy constructor\n";
	}
	C(int a) { cout << "Integer constructor is called\n"; }
};

C RVO1() {
	return C();
}

C RVO2() {
	C out;
	return out;
}

int main() {
	C c = RVO2(); // we can actually change this by adding the flat -fno-elide-constructor to the gcc compiler - this will disable ONLY Named-Return-Value-Optimization (NRVO)
	//
	// C d = C(); // another example of copy ellison
	// C e = C(C()); // two layers of copy ellison
	// C f = 1; // copy ellison
}
