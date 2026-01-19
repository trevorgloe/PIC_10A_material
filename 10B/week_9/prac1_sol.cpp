/*
Example question 1: Traverse a linked list

Write a loop to traverse a linked list and print out all the values
You've probably already seen code that can do this, but lets do it again just to be safe
*/

#include"linked.hpp"
#include<iostream>

using namespace std;

int main() {
	LinkedList LL {3,3,3,2,2,1,0,1};
	
	for (auto n = LL.head; n; n = n->next) {
		cout << n->data << " ";
	}
	return 0;
}
