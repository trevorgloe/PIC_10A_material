#include<iostream>

struct int_wrap {
	int_wrap(int _i) : i(_i) {}
	int_wrap& operator++() { i += 2 ; return *this; }
	int_wrap operator++(int) { int_wrap copy(*this); i += 2 ;
		return copy; }
	int i;
};
std::ostream& operator<<(std::ostream& out, int_wrap i_w) {
	out << i_w.i;
	return out;
}
int main() {
	int_wrap val(0);
	int_wrap a(0), b(0), c(0), d(0);
	val = ++(++a); std::cout << val << ' ' << a << std::endl;
	val = (b++)++; std::cout << val << ' ' << b << std::endl;
	val = (++c)++; std::cout << val << ' ' << c << std::endl;
	val = ++(d++); std::cout << val << ' ' << d << std::endl;
	return 0;
}
