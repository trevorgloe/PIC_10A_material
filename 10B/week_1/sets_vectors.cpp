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
	// Note: There is a version of a set that allows for repeated elements, it is called a "multiset" (both a mathematical idea and implimented in most languages
	// in general, count is faster on unordered sets than on ordered sets, but it is still faster than the same kind of operation would be on vectors (more on this later)
	
	// If time: why is this the case? 
	/*
	A vector stores the elements in continuous memory
	v[0] v[1] v[2] ... v[n]
	So if we want to find if 4 occurs in v, we just sequentially loop through all the elements. This gives us a worst-case time of n checks

	A set stores the elements in what is called a binary tree 
	The first element a has connections to two more elements, b and c
	b has two connections to the next elements d and e
	c has two connections to the next elements f and g
	and so on...
	If we want to find a value, say 4, we go to the first node a (suppose it is 10) and check if 4 is less than a
	It is less than a so be go to the right branch of the tree
	We are now at not b and we do the same check. Maybe 4 is greater than b so we go to the left branch of b
	Continuing this, we can find our value rather quickly, because we don't need to do n checks. If our tree is organized well the depth of the tree is the number of times we can divide n by 2. This is log_2(n)

	Finally, an unordered set organizes elements in a "hash table"
	A harsh table gives a numerical key, or "hash" to each element via a function that satisifies two things:
	1. It is fast (takes the same amount of time for every element
	2. It will not give the same number for two different elements in the unordered set
	This hash function then allows us to find an element in the amount of time it takes a compute the hash via the function
	Ex: if the elements are strings, take the ASCII code of each char and add them up (in real life you would throw in some modular arithmetic to make it more "random")
	*/
	
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

	// Interview-style question: Say we have a vector v. What is a fast way to find the unique elements of this vector and storing them?
	// We can use an unordered set!
	vector<int> w = {1, 4, 2, 5, 4, 4, 2, 5, 6, 5, 2, 2, 1};
	unordered_set<int> unique_w(w.begin(), w.end()); // this now has all the unique elements
	return 0;
}
