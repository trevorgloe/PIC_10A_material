#include <iostream>
using namespace std;

class E {
public:
	E(int _i) : i(_i), counter(0) {}
	int get() const { ++counter; return i; }
	void set(int _i) { ++counter; i = _i; }
	int printCount() const { return counter; }
private:
	int i;
	mutable int counter;
};

int main() {
	E e(8);
	cout << e.get() << " "; // 1
	e.set(88);
	cout << e.get() << " "; // 2
	e.set(888);
	cout << e.get() << " "; // 3
	cout << e.printCount() << endl;
	return 0;
}
