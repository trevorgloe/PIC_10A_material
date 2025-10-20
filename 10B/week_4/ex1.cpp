#include<iostream>
#include<set>
#include<vector>

// What is the output of the following code?
using namespace std;

int main() {
	vector<int> v = {1,2,3,4,4,4,4,5};
	set<int> A(v.begin(), v.end());

	for (int el : A) {
		cout << el << "\n";
	}
	return 0;
}
