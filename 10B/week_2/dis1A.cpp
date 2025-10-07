#include<iostream>
#include<vector>
#include<string>
#include<functional>

using namespace std;

int my_log2(int n, int cnt=0) {
	// do integer division
	int new_n = n/2;
	if (new_n == 0) {
		return cnt;
	}
	cnt = my_log2(new_n, cnt+1);
	return cnt;
}

float f(float x) {
	return 2*x*x - 3*x;
}

float integral(function<float(float)> f, float upper, float lower, float eps) {
	// Step 1:
	// Compute the integral using one rectangle (upper and lower)
	// cout << "Function call!\n";
	float one_rect = f(lower) * (upper - lower);

	// Step 2:
	// Compute the area using two rectangles
	// use the midpoint
	float two_rect = f(lower)*(upper - lower)/2 + f((upper + lower)/2)*(upper - lower)/2;

	// Step 3: recurse if the difference in the approximations is greater than eps, otherwise return two_rect
	if (abs(one_rect - two_rect) < eps) {
		return two_rect;
	}
	float int1 = integral(f, (upper + lower)/2, lower, eps);
	float int2 = integral(f, upper, (upper + lower)/2, eps);
	return int1 + int2;
}

vector<string> substrings_of_s(string s) {
	vector<string> w = substrings_of_s(s.substr(1));
}

int main() {
	// Recursion!!!
	// Recursion is calling the function inside its own body
	cout << my_log2(35) << "\n";

	// Test it out
	cout << integral(f, 1, 0, 0.00001) << "\n";

	// Substring
	// Given a string, find all the substrings
	// return a vector of all the substrings of a given string s
	string s = "Hello";
	return 0;
}
