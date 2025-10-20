#include<unordered_set>
#include<vector>
#include<iostream>

// What do the two functions do? Both are versions of doing the same thing
// which of these implementations will be faster?
// Is the second implementation a good use of an unordered_set? If not, how can we fix it?
using namespace std;

bool findElem(unordered_set<string> A, string s){
	for (string el : A) {
		if (el == s) {
			return true;
		}
	}
	return false;
}

bool findElem(vector<string> A, string s) {
	for (string el : A) {
		if (el == s) {
			return true;
		}
	}
	return false;
}

int main() {

	return 0;
}
