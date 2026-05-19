#include<iostream>

using namespace std;

int main() {
	double d1 = 1.01;
	double d2 = 2.02;
	double& r1 = d1;
	d1 *= 3;
	cout << r1 << " " << d1 << "\n";
	r1 = d2;
	cout << r1 << " " << d2 << "\n";
	cout << d1 << "\n";
	return 0;
}
