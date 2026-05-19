#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> v = {1,1,1,1,2,2,2,2};
	for (int i=5; i>0; --i) {
		cout << v.at(i) << " ";
	}
	cout << "\n";
	return 0;
}
