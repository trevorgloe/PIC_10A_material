#include<iostream>

class C {
private:
int i;
public:
C(int i_) : i(i_) {}
};

int main() {
std::cout << -1 << "\n";
	C c1(1);
	C c2 = c1;
return 0;
}
