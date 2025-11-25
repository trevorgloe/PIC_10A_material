#include<iostream>
#include<vector>

/* The goal of this activity is to practice writing iterators.

Example 1: Write an iterator that iterates through the square numbers up to (not including) n^2
*/

class Squares {
private:
	int* data;

public:
	Squares(int n) : data(new int[n]) {
		for (int i=0; i<n; i++) {
			data[i] = i*i;
		}
	}
	
	class iterator {
	private:
		const Squares* container;
		int* curr;
		friend bool operator!=(const iterator& it1, const iterator& it2) {
			if ((it1.container != it2.container) || (it1.curr != it2.curr)) {
				return true;
			} else {
				return false;
			}
		}
	public:
		iterator(const Squares* container, int* curr) : container(container), curr(curr) {};
		iterator& operator++() {
			curr++;
			return *this;
		}
		int& operator*() {
			return *curr;
		}
	};
};
using namespace std;

int main() {
	// Should print 0, 1, 4, 9, 16, 25, 36
	for (unsigned int i : Squares(7)) {
		cout << i << "\n";
	}
}
