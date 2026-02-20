#include"dis1A_class.hpp"
#include<utility>

MySharedPtr::MySharedPtr() : ptr(nullptr), count(new int(0)) {};

MySharedPtr::MySharedPtr(int size) : ptr(new float[size]), count(new int(1)) {};

MySharedPtr::MySharedPtr(const MySharedPtr& right) : ptr(nullptr), count(nullptr) {
	this->ptr = right.ptr;
	this->count = right.count;

	// increment the count
	// only if the pointer is not null
	if (right.ptr != nullptr) {
		(*this->count)++;
	}
}

void MySharedPtr::clean() {
	(*count)--;
	if (*count == 0) {
		delete[] ptr;
		delete count;
	}
}
MySharedPtr& MySharedPtr::operator=(const MySharedPtr& right) {
	clean();
	this->ptr = right.ptr;
	this->count = right.count;

	if (right.ptr != nullptr) {
		(*this->count)++;
	}
	return *this;
}

// Move constructor
MySharedPtr::MySharedPtr(MySharedPtr&& right) {
	this->ptr = right.ptr;
	this->count = right.count;

	// null out right so it can't effect the data anymore
	right.ptr = nullptr;
	right.count = nullptr;
}

// Move assignment operator
MySharedPtr& MySharedPtr::operator=(MySharedPtr&& right) {

