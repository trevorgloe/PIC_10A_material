#include<iostream>

using namespace std;

class W_int {
	friend W_int operator+(const W_int& left, const W_int& right);
	friend ostream& operator<<(ostream& out, const W_int& item);
	friend bool operator==(const W_int& left, const W_int& right);
private:
	int i;

public:
	W_int(int i_) : i(i_) {};

	W_int& operator+=(const W_int& right) {
		i += right.i;
		return *this;
	}
	W_int& operator+=(const int& right) {
		i += right;
		return *this;
	}
	W_int& operator++() {
		i++;
		return *this;
	}
	W_int operator++(int unused) {
		W_int temp(i);
		(*this).i++;
		return temp;
	}
	W_int operator-() const {
		W_int out((*this).i);
		out.i *= -1;
		return out;
		// return -i;
	}
};

bool operator==(const W_int& left, const W_int& right) {
	return (left.i == right.i);
}

ostream& operator<<(ostream& out, const W_int& item) {
	out << item.i;
	return out;
}

W_int operator+(const W_int& left, const W_int& right) {
	W_int res(0);
	res.i = left.i + right.i;
	return res;
}


int main() {
	W_int C(1);
	C += 1;
	++C;
	W_int B(2);
	C += B;
	W_int D(2);
	D = -C;
	const int& i = 1;
}
