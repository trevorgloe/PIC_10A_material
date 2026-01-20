#include<iostream>
#include<functional>

int my_log2(int n, int cnt=0) {
	// do integer division by 2
	int new_n = n/2;
	if (new_n==0) {
		return cnt;
	}
	cnt = my_log2(new_n, cnt+1);
	return cnt;
}

float f(float x) {
	return 2*x*x - 3*x;
}

float integral(std::function<float(float)> f, float upper, float lower, float eps) {
	// 3 steps
	// 1. Compute the integral using one region
	//
	// 2. Compute the integral using 2 regions (find the midpoint)
	//
	// 3. (Slightly harder) Compare the integral computed with one and two regions, and recurse if this difference is above eps
	
	// 1.
	float onereg = f(lower) *(upper - lower);

	// 2. 
	float tworeg_1 = f(lower) * (upper - lower)/2.0;
	float tworeg_2 = f((upper + lower)/2.0) * (upper - lower)/2.0;

	// 3. 
	float two_reg = tworeg_1 + tworeg_2;
	if (std::abs(two_reg - onereg) > eps) {
		// recurse
		return integral(f, upper, (upper + lower)/2.0, eps) + integral(f, (upper+lower)/2.0, lower, eps);
	} else {
		return two_reg;
	}
}
using namespace std;

int main() {
	cout << my_log2(8) << "\n";

	float upper = 1.0;
	float lower = 0.0;
	float eps = 0.00001;
	cout << integral(f, upper, lower, eps) << "\n";
	return 0;
}
