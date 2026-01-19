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
	// cout << LL.head << "\n";
	// cout << LL.head->next << "\n";

	node* curr = LL.head;
	node* temp = nullptr;
	node* forward = LL.head;

	node* newtail = LL.head;
	while(curr) {
		// cout << curr << "\n";
		// make temp the previous
		temp = curr->prev;

		// move forward forward
		forward = forward->next;

		// swap the prev and next for curr
		curr->prev = curr->next;
		curr->next = temp;
		// cout << "Current value is " << curr->data << "\n";

		// move curr
		curr = forward;
	}
	// cout << LL.head << "\n";
	// cout << LL.head->next << "\n";
	LL.head = temp->prev;
	LL.tail = newtail;
	// cout << LL.head->data << "\n";
	// cout << LL.tail->data << "\n";
}

int main() {
	LinkedList LL {1,2,3,4,5,6,7};
	// cout << LL.head << "\n";
	reverse(LL);


	// cout << "ran function\n";
	// cout << LL.head << "\n";
	// cout << LL.head->next << "\n";

	for (auto n = LL.head; n; n=n->next) {
		cout << n->data << " ";
	}
	cout << "\n";
	return 0;
}
