#include <iostream>
using namespace std;

class C {
public:
	explicit C(int x) : i(x) {}
	C(double) = delete;
	// Convert C to int
	operator int() const { return i; }
private:
	int i;
};

int main() {
	C c1(42);
	C c2(3.14); // (A) Uncomment this line if you wish to test
	int x = c1;
	cout << x << endl;
	return 0;
}
