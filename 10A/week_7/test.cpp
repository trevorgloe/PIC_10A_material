#include<vector>

using namespace std;

int main() {
	vector<int> v = {1,2,3,4};
	vector<float> w;
	v.push_back(1);
	v.pop_back();
	for (int& x : v) {
		x++;
	}

	double d = 1.0;
	// int& r = d;
	return 0;
}
