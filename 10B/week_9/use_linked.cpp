#include<iostream>
#include "linked.hpp"

using namespace std;

int main() {
	LinkedList LL {1, 2, 4, 5, 6, 7};

	cout << LL.head->data << "\n";
	cout << LL.head->next->data << "\n";
	cout << LL.tail->data << "\n";
	LL.pop_back();
	LL.pop_back();
	LL.pop_back();
	LL.pop_back();
	cout << LL.tail->data << "\n";
	return 0;
}
