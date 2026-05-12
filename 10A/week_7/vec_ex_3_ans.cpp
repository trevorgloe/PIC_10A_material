/*
Lets solve a differential equation numerically!
We'll use Euler's method for solving the equation
This means that we'll approximate the equation dy/dt = f(y) by y[i+1]-y[i] = dt * f(y[i])
The grid of times will be given to us
*/
#include<iostream>
#include<vector>
#include<fstream>
#include<cmath>

float f(float y) {
	return y*y;
}

using namespace std;

int main() {
	vector<float> t;
	const size_t N = 2000; // number of points being simulated
	const float T = 2.0;
	for (int i=0; i<N; ++i) {
		// cout << static_cast<float>(i) * T / N << " ";
		t.push_back(static_cast<float>(i) * T / N);
	}
	// for (int i=0; i<N; ++i) {
	// 	cout << t[i] << " ";
	// }

	// numerically solve ode 
	vector<float> y;
	// y[0] = 0.1;
	y.push_back(0.5);
	for (int i=0; i<N-1; ++i) {
		y.push_back(y[i] + (t[i+1]-t[i])*f(y[i]));
	}

	ofstream out("y_out.txt");
	for (int i=0; i < y.size(); ++i) {
		out << y[i] << " ";
	}
	return 0;
}
