// what is the output?
// This one is tricky
// What would happen if the first f looked like f(int i)?

#include<iostream>
#include<vector>

using namespace std;
int g(int j) {
	return j + 2;
}

int g(double j) {
	return j+1;
}

int f(double i) {
	i++;
	return g(i);
}

int f(const int& i) {
	double newi = static_cast<double>(i);
	return g(i);
}

int main() {
	const int i = 1;
	cout << f(i) << "\n";
	cout << f(0.5) << "\n";
	
	return 0;
}
