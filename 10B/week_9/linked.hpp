/*
Header for basic linked list of floats
*/

#ifndef LINKED_HPP
#define LINKED_HPP

#include <initializer_list>
#include<iostream>

class LinkedList {
public:
	class Node;

	// constructors
	LinkedList();
	LinkedList(std::initializer_list<float> il);

	// destructor
	~LinkedList();

	// functions to add and take away
	void push_back(float f);
	void pop_back();

public:
	Node* head;
	Node* tail;

};

class LinkedList::Node {
public:
	float data;
	Node* next;
	Node* prev;

	Node();

	Node(float data);
};

#endif
