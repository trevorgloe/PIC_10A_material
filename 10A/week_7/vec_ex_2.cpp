// what is the output of the following code?
// how can we improve on the given function?
#include<iostream>
#include<vector>

using namespace std;

vector<int> myplus(vector<int> v, vector<int> w) {
	vector<int> out;
	for (int i=0; i < v.size(); ++i) {
		out[i] = v[i] + w[i];
	}
	return out;
}

int main() {
	vector<int> v = {1, 'a', 'd', 2};
	
	vector<int> w = {0,0,0,0};
	vector<int> sum = myplus(v,w);
	cout << sum[0] << "\n";

	vector<int> u = {1,2};
	vector<int> sum2 = myplus(u, v);
	cout << sum2.at(0) << " " << sum2.at(1) << " " << sum2.size() << "\n";
	return 0;
}
