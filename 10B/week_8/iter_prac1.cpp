#include<iostream>
#include<vector>

/* The goal of this activity is to practice writing iterators.

Example 1: Write an iterator that iterates through the square numbers up to (not including) n^2
*/

using namespace std;

int main() {
	// Should print 0, 1, 4, 9, 16, 25, 36
	for (unsigned int i : Squares(7)) {
		cout << i << "\n";
	}
}
