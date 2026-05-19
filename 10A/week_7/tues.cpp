#include<iostream>
#include<vector>

using namespace std;

int main() {
	// vectors are class-templates
	vector<int> v;
	vector<double> w;

	// member functions
	v.push_back(1);
	v.push_back(2);
	v.pop_back(); // WARNING: doing pop_back on an empty vector is undefined behavior
	cout << v[0] << "\n";

	// constructors
	vector<float> u = {1.1, 1.2, 1.3, 1.4};
	vector<int> many_zeros(10, 0);
	cout << many_zeros.at(9) << "\n";

	many_zeros.resize(3); // makes vector size 3
	cout << many_zeros.size() << "\n";
	many_zeros.resize(6); // makes the vector size 6 and pads the new entries with 2
	cout << many_zeros.at(4) << "\n";

	vector<int> new_v;
	cout << new_v.capacity() << "\n";
	for (int i=0; i< 10; ++i) {
		new_v.push_back(i);
	}
	cout << new_v.capacity() << "\n";
	new_v.shrink_to_fit();
	cout << new_v.capacity() << "\n";
	return 0;
}
