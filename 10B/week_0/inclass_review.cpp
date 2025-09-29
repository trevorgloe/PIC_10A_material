#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>

using namespace std;

// Lets make a quick class
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

int main() {
	// Hello!
	
	// Vectors
	vector<int> v = {1, 2, 3, 4};
	// We can print with a normal for loop
	v.push_back(1);
	for (int i=0; i<v.size(); i++) {
		cout << v[i];
	}
	cout << "\n";
	// Or a range-based loop
	for (int j : v) {
		cout << j;
	}
	cout << "\n";

	// Sets
	set<char> A;
	A.insert('a');
	A.insert('b');
	A.insert('c');
	cout << "The set A: " << "\n";
	for (char a : A) {
		cout << a;
	}
	cout << "\n";

	// Unordered set
	unordered_set<char> B;
	B.insert('a');
	B.insert('b');
	B.insert('d');
	cout << "The set B: " << "\n";
	for (char a : B) {
		cout << a;
	}
	cout << "\n";

	// Both have a "count" function
	cout << A.count('a') << "\n";
	TwoInts T(2,3);
	// T is the instance of the class
	TwoInts* Tp = &T;
	// Tp is a pointer to T
	cout << Tp->sum_them() << "\n";
	{
		int a = 1;
	}


	return 0;
}
