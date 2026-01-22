#include<iostream>
#include<vector>

using namespace std;

int fib(int n) {
	if (n == 1 || n == 0) {
		return 1;
	} 
	return fib(n-1) + fib(n-2);
}

int fib2(int n) {
	vector<int> F;
	F.push_back(1);
	F.push_back(1);

	if (n == 1 || n == 0) {
		return F[0];
	}

	for (int j=2; j < n; ++j) {
		F.push_back(F[j-1] + F[j-2]);
	}
	return F[n-1] + F[n-2];
}

int main() {

	return 0;
}
