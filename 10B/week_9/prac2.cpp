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
	node* curr = LL.head;
	node* temp = nullptr;
	node* forward = LL.head;

	node* newtail = LL.head;
	while (curr) {
		temp = curr->prev;

		// move "forward" up one
		forward = forward->next;

		// swap
		curr->prev = curr->next;
		curr->next = temp;

		// move curr
		curr = forward;
	}

	LL.head = temp->prev;
	LL.tail = newtail;
}

int main() {
	LinkedList LL {1,2,3,4,5,6,7};
	reverse(LL);

	for (auto n = LL.head; n; n=n->next) {
		cout << n->data << " ";
	}
	cout << "\n";
	return 0;
}
