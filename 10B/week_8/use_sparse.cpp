#include "sparse.hpp"

using namespace std;

int main() {
	SparseVec v(11, 100);
	for (int i=0; i < 10; ++i) {
		v.add(static_cast<float>(i) / 100.0, i*10);
	}
	
	// cout << v.test() << "\n";
	for (int j=0; j<100; ++j) {
		cout << v.get(j) << " ";
	}
	
	cout << "\n";
	// cout << *vbeg << "\n";

	for (float v : v) {
		cout << v << " ";
	}
	cout << "\n";
}
