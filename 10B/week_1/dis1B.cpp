#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<string>

class TwoInts {
private:
	int first;
	int second;

public:
	// constructor
	TwoInts(int _first, int _second) : first(_first), second(_second) {}

	int sum_them() {
		return first + second;
	}
};

using namespace std;

int main() {
	TwoInts A(1,2);
	cout << A.sum_them() << "\n";
	// cout << A.first << "\n";
	
	int a = 1;
	int* p = &a;
	cout << p << "\n";
	cout << *p << "\n";

	// Vectors
	vector<int> v = {1,2,3,4};
	// can iterate through with a for loop
	for (int i=0; i<v.size(); ++i) {
		cout << v[i] << "\n";
	}

	// set 
	set<char> B;
	B.insert('b');
	B.insert('a');
	// range-based for loop
	for (char c : B) {
		cout << c << "\n";
	}
	cout << B.count('c') << "\n";

	unordered_set<char> uB;
	uB.insert('a');
	uB.insert('b');
	for (char c : uB) {
		cout << c << "\n";
	}
	cout << uB.count('a') << "\n";

	set<int> C(v.begin(), v.end());

	// Problem
	vector<string> words = {"apple", "hamburger", "pizza", "pear", "grape", "tofu", "beans", "watermellon"};
	// We want to figure out how many words in the vector have a certain lettter
	const char testchar = 'z';
	// Step 1: We put the chars from each word into an unordered set (one for each word)
	// Step 2: Then go through each of the unordred sets and figure out if it has the letter we want

	vector<unordered_set<char>> charsets;
	for (string word : words) {
		unordered_set<char> wordset(word.begin(), word.end());
		// for (char w : word) {
		// 	wordset.insert(w);
		// }

		charsets.push_back(wordset);
	}
	cout << charsets[0].count('a') << "\n";
	
	return 0;
}
