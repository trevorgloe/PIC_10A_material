// What is the error with the following code?
#include<iostream>
#include<vector>

using namespace std;

float norm(vector<float>& v) {
	float sum = 0.0;
	for (float& v : v) {
		sum += v;
	}
	return sum / v.size();
}

int main() {
	const vector<float> v = {1,2,3,4,5};
	cout << norm(v) << "\n";
}
