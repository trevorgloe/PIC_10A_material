/*
Example 2: reverse a linked list
This is one of the most common interview questions out there, so lets get it down

Some specifics:
A good algorithm will run in O(n) time and O(1) space, so we can't just dump the list into an array and make a new list
*/

#include "linked.hpp"
#include<iostream>

typedef LinkedList::Node node;
using namespace std;

void reverse(LinkedList& LL) {

}

int main() {
	LinkedList LL {1,2,3,4,5,6,7};
	
	for (auto n = LL.head; n; n=n->next) {
		cout << n->data << " "; // prints 1,2,3,4,5,6,7
	}
	cout << "\n";

	reverse(LL);

	for (auto n = LL.head; n; n=n->next) {
		cout << n->data << " "; //should print 7,6,5,4,3,2,1
	}
	cout << "\n";
	return 0;
}
