#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<string>

using namespace std;

unordered_set<int> uset_union(unordered_set<int> A, unordered_set<int> B) {
	// Simplest method: iterate through A and then check if that element is in B
	// Iterating through A will be slow but checking that the element is in B will be fast
	unordered_set<int> U;
	for (int i : A) {
      		// check if its in B
      		if (B.count(i)) {
      			U.insert(i);
      		}
      	}
	return U;
}

int main() {
	// Lets briefly go over some work with vectors, sets, and unordered sets
	// Then we can go through some problems
	
	// each one of these is a "class template", which means its a class once we specify the datatype it contains
	vector<int> v = {1, 2, 4, 5};

	// we can print the vector elements using a ranged-based loop
	for (int i : v) {
		cout << i << " ";
	}
	cout << "\n";

	// similarly, a set is a class template
	// a set has a couple of initializers, so lets talk about the two most useful (IMO)
	set<char> oA;
	oA.insert('a'); // then we can insert things as we please
	oA.insert('b');

	set<int> oB(v.begin(), v.end()); // this makes a set with all the elements of v
	// aside: what is v.begin()? This is an "iterator", which is a special functionality given by the vector class template
	
	// each one we can print with a ranged-based loop
	cout << "Elements of oA: \n";
	for (char c : oA) {
		cout << c << " ";
	}
	cout << "\n";
	cout << "Elements of oB: \n";
	for (int i : oB) {
		cout << i << " ";
	}
	cout << "\n";

	// then we have unordered sets, which have the same initializers
	unordered_set<char> uA;
	uA.insert('a');
	uA.insert('b');

	unordered_set<int> uB(v.begin(), v.end());
	cout << "Elements of uA: \n";
	for (char c : uA) {
		cout << c << " ";
	}
	cout << "\n";
	cout << "Elements of uB: \n";
	for (int i : uB) {
		cout << i << " ";
	}
	cout << "\n";
	// note that the elements are now not printed in any particular order, that is the nature of an unordered set
	
	// both set and unordered set have a member function called "count" which returns the number of occurances of that element
	cout << uA.count('a') << "\n"; // note that this value will only ever return 1 or 0, since a set can only store one ocurrance of a value
	cout << oB.count(4) << "\n";
	// in general, count is faster on unordered sets than on ordered sets, but it is still faster than the same kind of operation would be on vectors (more on this later)
	
	// Problems
	// Lets say we have an vector of words like follows
	vector<string> words = {"apple", "hamburger", "pizza", "pear", "grape", "tofu", "beans", "watermellon"};
	// we want to figure out how many words have a certain letter using unordered_sets
	// Step 1:What we will do is put the chars from each word into an unodered_set
	// Step 2: Then we go through each of the unordered_sets we made and figure out if it has the char
	
	// Step 1
	vector<unordered_set<char>> charsets;
	for (string word : words){
		unordered_set<char> wordset;
		for (int j=0; j<word.size(); j++){
      			wordset.insert(word.at(j));
      		}
		charsets.push_back(wordset);
	}
	// We can test this to make sure it works by checking if the first word has a
	cout << charsets[0].count('w') << "\n";

	// Step 2
	// lets say we want to see if each word has the char picked below
	char testchar = 'z';
	// now we just need to loop through our vector and print out if each word has it
	for (unordered_set<char> wordset : charsets) {
		if (wordset.count(testchar)) {
      			cout << "The word has the char " << testchar << "\n";
      		} else {
      			cout << "The word does not have the char " << testchar << "\n";
      		}
	}

	// Interview-style question: write a function to find the union of two unordered_set<int>'s
	// Function for this is at the top
	// Test:
	unordered_set<int> A = {1,2,3,4,5,6,7,8};
	unordered_set<int> B = {2,4,6,8,10,12};
	unordered_set<int> U = uset_union(A, B);
	cout << "Union is: \n";
	for (int u : U) {
		cout << u << " ";
	}
	cout << "\n";
	return 0;
}
