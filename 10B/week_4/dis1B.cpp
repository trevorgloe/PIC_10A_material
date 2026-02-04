#include<iostream>
#include<string>

using namespace std;

const int& f(const int& i) {
	return 0;
}

// class A {
// public:
// 	void thing() const {
//

class My_int {
	friend ostream& operator<<(ostream& out, My_int item);
	friend istream& operator>>(istream& in, My_int item);
private:
	int i;
public:
	My_int(int i_) : i(i_) {};
	explicit operator double() const {
		return i;
	}
};

ostream& operator<<(ostream& out, My_int item) {
	out << item.i << "\n";
	return out;
}

istream& operator>>(istream& in, My_int item) {
	in >> item.i;
	return in;
}
int main() {
	const int& a = f(2);
	const int& b = 3;
	cout << a << "\n";
	cout << b << "\n";
	const int& c = b; // undefined if b is destroyed
	My_int C(1);
	double k = static_cast<double>(C);
	double k1 = C;
	return 0;
}
