#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>

using namespace std;

int main() {
	// Vectors
	// - a class template
	vector<int> v = {1,2,4,5};

	// we can print the elements using a "range-based loop"
	for (int i : v) {
		cout << i << " ";
	}
	cout << "\n";

	// sets
	set<char> oA;
	oA.insert('b');
	oA.insert('a');

	set<int> oB(v.begin(), v.end());
	// what the heck is v.begin()?
	
	cout << "Elements of A \n";
	for (char c : oA) {
		cout << c << " ";
	}
	cout << "\n";
	cout << "Elements of B \n";
	for (int i : oB) {
		cout << i << " ";
	}
	cout << "\n";

	// unordered set
	unordered_set<char> uA;
	uA.insert('a');
	uA.insert('b');
	uA.insert('d');

	unordered_set<int> uB(v.begin(), v.end());
	cout << "Elements of uA \n";
	for (char c : uA) {
		cout << c << " ";
	}
	cout << "\n";
	cout << "Elements of uB \n";
	for (int i : uB) {
		cout << i << " ";
	}
	cout << "\n";

	// count 
	cout << uA.count('a') << "\n";;
	cout << oB.count(10) << "\n";

	// Problems
	// Lets say we have a vector of strinng
	vector<string> words = {"apple", "hamburger", "pizza", "pear", "grape", "tofu", "beans", "watermellon"};
	char testchar = 'a';
	// we want to figure out if each word has a letter (testchar)
	// Step 1: We will put the chars from each of the words into an unordered set
	// Step 2: Loop through those sets and test each one for a given element
	
	// Step 1:
	for (string word : words) {
		unordered_set<char> chars(word.begin(), word.end());
		if (chars.count(testchar))
		for (char c : chars) {
			if (c== testchar) {
				cout << "Has the char \n";
			} else {
				cout << "Does not have the char \n";
			}
		}
	}
	return 0;
}
