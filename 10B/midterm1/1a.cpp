#include<iostream>

using namespace std;

int f(int n) {
	if (n==0 || n==1) { return 1; }
	if (n % 2 == 0) { return n + f(n/2); }
	return f(n-1) + f(n-2);
}

int main() {
	cout << f(1) << "\n";
	cout << f(2) << "\n";
	cout << f(3) << "\n";
	cout << f(5) << "\n";
	cout << f(6) << "\n";
}
