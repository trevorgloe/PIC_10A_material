#include<iostream>
#include<vector>

using namespace std;

void print(vector<int>& v) {
	cout << "[";
	for (int& i : v) {
		cout << i << ", ";
	}
	cout << "]\n";
}

void modify(vector<int>& u) {
	size_t N = u.size();
	for (int i=0; i<N; ++i) {
		if (u[i]%2 == 0) {
			u.push_back(1);
		} else {
			u[i] *= 2;
		}
	}
}

int main() {
	vector<int> v = {1,2,3,4};
	modify(v);
	print(v);
	return 0;
}
