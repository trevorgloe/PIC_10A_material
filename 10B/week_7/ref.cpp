#include <iostream>
#include<string>

using namespace std;

int& f(const int& a) {
	return a;
}

class C {
private:
	mutable int i;
public:
	void inc() const {
		i++;
	}
};

const string& f(const string& s) {
	return s;
}

const int& g(const int& i) {
	return i;
}

int main() {
	// const string& t = f("Hello");
	const int& a = g(1); // undefined behavior
	int b = g(1); // okay
}
