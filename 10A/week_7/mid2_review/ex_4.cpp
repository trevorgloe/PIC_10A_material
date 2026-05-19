// Find the error
#include<iostream>
#include<vector>

using namespace std;

vector<float> f(float f, size_t n) {
	vector<float> out(f, n);
	return out;
}

int main() {
	vector<float> u = {1,1,2,2,3};
	vector<float>& ur;	
	ur = f(1.5, 10);
	return 0;
}
