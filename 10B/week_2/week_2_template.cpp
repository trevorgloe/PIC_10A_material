#include<iostream>
#include<vector>
#include<functional>

using namespace std;

// function we are integrating
float f(float x) {
	return 2*x*x - 3*x;
}

// recursive function to compute the integral
float integral(function<float(float)> f, float upper, float lower, float eps) {
	return 0.0;
}
