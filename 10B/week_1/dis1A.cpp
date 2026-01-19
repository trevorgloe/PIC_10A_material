#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>

// lets create a class
class TwoInts {
public:
	TwoInts(int _first, int _second) : first(_first), second(_second) {}
	
	int sum_them() {
		return first + second;
	}
private:
	int first;
	int second;
};

using namespace std;

int main() {
	TwoInts t(1,2);
	// cout << t.first << "\n";
	// pointers
	int a = 1;
	int* p = &a;
	cout << *p << "\n";

	// Vectors
	vector<int> v = {1, 2, 3};
	cout << v[0] << "\n";
	v.push_back(4);
	v.pop_back();

	// Sets
	set<char> oA;
	oA.insert('b');
	oA.insert('a');
	oA.insert('a');

	set<int> oB(v.begin(), v.end());

	cout << "Elements of set oA\n";
	for (char c : oA) {
		cout << c << " ";
	}
	cout << "\n";

	cout << oA.count('c') << "\n";

	// Unordered set
	unordered_set<char> uA;
	uA.insert('a');
	uA.insert('b');

	unordered_set<int> uB(v.begin(), v.end());

	for (char c : uA) {
		cout << c << " ";
	}
	cout << "\n";
	cout << uA.count('a') << "\n";

	return 0;
}
