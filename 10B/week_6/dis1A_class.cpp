#include"dis1A_class.hpp"

MySharedPtr::MySharedPtr() : ptr(nullptr), count(new int(0)) {};

MySharedPtr::MySharedPtr(const MySharedPtr& right) : ptr(nullptr), count(nullptr) {
	// copy the member variables
	this->ptr = right.ptr;
	this->count = right.count;
	
	if (right.ptr != nullptr) {
		(*this->count)++;
	}
}

MySharedPtr::MySharedPtr(MySharedPtr&& right) : ptr(nullptr), count(nullptr) {
	// steal the resources from right
	this->ptr = right.ptr;
	this->count = right.count;

	right.ptr = nullptr;
	right.count = nullptr;
}

MySharedPtr::~MySharedPtr() {
	if (count != nullptr) {	
		(*count)--;
		if (*count == 0) {
			delete[] ptr;
			delete count;
		}
	}
}

MySharedPtr& MySharedPtr::operator=(const MySharedPtr& right) {
	if (count != nullptr) {	
		(*count)--;
		if (*count == 0) {
			delete[] ptr;
			delete count;
		}
	}

