#include"linked.hpp"
#include <initializer_list>


LinkedList::LinkedList() : head(nullptr), tail(nullptr) {}

LinkedList::LinkedList(std::initializer_list<float> il) : LinkedList() {
	for (float f : il) {
      		push_back(f);
	}
}

void LinkedList::push_back(float f) {
	Node* n = new Node(f);

	if (tail) {
		n->prev = tail;
		tail->next = n;
	} else {
		// tail is nullptr, list is empty
		head = n;
	}
	tail = n;
}

void LinkedList::pop_back() {
	if (!tail) {
		return;
	}

	if (head == tail) {
		delete tail;
		head = nullptr;
		tail = nullptr;
	} else {
		Node* new_tail = tail->prev;
		delete tail;
		tail = new_tail;
		tail->next = nullptr;
	}
}

LinkedList::~LinkedList() {
	Node* n = head;
	
	while(n) {
		// traverse linked list, and delete
		Node* next = n->next;
		delete n;
		n = next;
	}
}

LinkedList::Node::Node() : data(0), next(nullptr), prev(nullptr) {}

LinkedList::Node::Node(float f) : data(f), next(nullptr), prev(nullptr) {}
