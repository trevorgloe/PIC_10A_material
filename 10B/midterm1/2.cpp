#include<iostream>
#include<string>

using namespace std;

struct C {
int i;
C(int i) : i(i) {};
operator int() {return i;}
};
int operator+(const C& c1, const C& c2) {
	return c1.i + c2.i;
}

int main() {
	C c(5);
	int i = 0;
	double d = 6;
	i=c;
	c = i;
	i = static_cast<int>(c);
	// i = c+1;
	char ch = c;
	// string s = c;
	d = c+c;

	return 0;
}
