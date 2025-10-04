#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<unordered_set>

using namespace std;

int main() {
	// A bit more on sets and unordered sets
	set<int> oA;
	oA.insert(1);
	oA.insert(2);
	oA.insert(10);
	oA.insert(6);
	for (int i : oA) {
		cout << i << " ";
	}
	cout << "\n";
	// set stores the elements in order according to "<"
	
	// unordered sets
	unordered_set<string> uA;
	uA.insert("string1");
	uA.insert("string2");
	uA.insert("other string");
	for (string s : uA) {
		cout << s << " ";
	}
	cout << "\n";

	cout << oA.count(1) << "\n";
	cout << uA.count("string3") << "\n";

	// Problems
	// Lets say we have a vector of words
	vector<string> words = {"apple", "hameburger", "pizza", "pear", "grape", "tofu", "beans", "watermellon"};
	// we want to figure out how many of the words in the vector have a given char
	const char testchar = 'a';
	// Step 1: We want to put the chars from each of the words into its own unordered set
	vector<unordered_set<char>> charsets;
	for (string word : words) {
		unordered_set<char> wordset;	
		for (char c : word) {
			wordset.insert(c);
		}

		charsets.push_back(wordset);
	}

	// Step 2: We want to figure out if the test char is in each unordered set
	for (unordered_set<char> charset : charsets) {
		if (charset.count(testchar)) {
			cout << "In the set\n";
		}
	}
	return 0;
}
