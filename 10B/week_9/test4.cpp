#include<string>
#include<iostream>

using namespace std;

const string& f(const string& s) {
	return s;
}

const int& f(int i) {
	int a = i+1;
	return a;
}

class C {
	friend int operator+(C left, C right);
private:
	int i;
public:
	operator double() { return static_cast<double>(i); }
	C(int a) : i(a) {};
};

int operator+(C left, C right) {
	return left.i + right.i;
}

int main() {
	// int a = 1;
	// const int& a = 1;
	// string s1 = f(f("Hello")); // works correctly
	// const string& r1 = f("Hello"); // undefined behavior
	// C c(1);	
	// cout << c + 1 << "\n"
	int* p = new int(1);
	// p = nullptr;
	delete p;
	delete p;
}
