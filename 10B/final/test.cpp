#include<iostream>

class C {
int a;

public:
	C() : a(0) {
		std::cout << "df\n";
	}

	C(const C& _c) : a(0) {
		std::cout << "copy\n";
	}

	C(C&& _c) : a() {
		std::cout << "move\n";
	}
};

int f(C _c) {
	return 0;
}

int main() {
	C a = C();
	// C b(a);
	// f((C()));
	f(a);
	return 0;
}
