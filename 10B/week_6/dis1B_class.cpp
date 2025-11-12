#include"dis1B_class.hpp"
#include <algorithm>

MySharedPtr::MySharedPtr() : ptr(nullptr), count(new int(0)) {};

MySharedPtr::MySharedPtr(const MySharedPtr& right): ptr(nullptr), count(nullptr) {
	this->ptr = right.ptr;
	this->count = right.count;
	
	if (right.ptr != nullptr) {
		(*this->count)++;
	}
}

MySharedPtr::MySharedPtr(MySharedPtr&& right) : ptr(nullptr), count(nullptr) {
	// std::swap(this->ptr, right.ptr);
	// std::swap(this->count, right.count);
	this->ptr = right.ptr;
	right.ptr = nullptr;
	this->count = right.count;
	right.count = new int(0);
}

MySharedPtr::~MySharedPtr() {	
	if (!(*this->count)) {
		delete count;
	} else {
		(*this->count)--;
		if (!(*this->count)) {
			delete[] ptr;
			delete count;
		}
	}
}
