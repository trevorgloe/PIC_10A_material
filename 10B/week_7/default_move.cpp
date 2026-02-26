#include<iostream>

using namespace std;

class C {
public:
	C(int i_) : i(i_) {};
	int i;
};

int main() {
	C c1(2);
	C c2(4);
	c1 = std::move(c2);
	cout << c1.i << " " << c2.i << "\n";
}
