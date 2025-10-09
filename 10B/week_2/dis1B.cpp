#include<iostream>
#include<vector>
#include<string>
#include<functional>

using namespace std;

int my_log2(int n, int cnt=0) {
	// do integer division
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

float integral(function<float(float)> f, float upper, float lower, float eps) {
	// compute the area of a single rectable approximation
	float one_rect = f(lower) * (upper - lower);

	// compute the approximation using two rectangles
	float left_rect = f(lower) * (upper - lower)/2;
	float right_rect = f((lower + upper)/2) * (upper - lower)/2;

	// compare the two approximations, if they differ by more than eps
	// recurse (call integral on both halves)
	// if not, return left_rect + right_rect
	if (abs(one_rect - left_rect - right_rect) > eps) {
		return integral(f, (upper + lower)/2, lower, eps) + integral(f, upper, (upper + lower)/2, eps);
	} else {
		return left_rect + right_rect;
	}
}
int main() {
	// Recursion
	// Recursion is calling a function inside its body
	cout << my_log2(35) << "\n";

	// Test it out
	cout << integral(f, 1.0, 0.0, 0.000001) << "\n";
	return 0;
}
