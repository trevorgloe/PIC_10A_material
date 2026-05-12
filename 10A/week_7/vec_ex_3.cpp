/*
Lets solve a differential equation numerically!
We'll use Euler's method for solving the equation
This means that we'll approximate the equation dy/dt = f(y) by y[i+1]-y[i] = dt * f(y[i])
The grid of times will be given to us
*/
#include<iostream>
#include<vector>
#include<fstream>

float f(float y) {
	return y;
}

using namespace std;

int main() {
	vector<float> t;
	const size_t N = 100; // number of points being simulated
	const float T = 1.0;
	for (int i=0; i<N; ++i) {
		// cout << static_cast<float>(i) * T / N << " ";
		t.push_back(static_cast<float>(i) * T / N);
	}
	for (int i=0; i<N; ++i) {
		cout << t[i] << " ";
	}

	// numerically solve ode 
	vector<float> y;

	ofstream out("y_out.txt");
	for (int i=0; i < y.size(); ++i) {
		out << y[i] << " ";
	}
	return 0;
}
