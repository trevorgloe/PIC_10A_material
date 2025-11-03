#include"myshared_ptr.hpp"

void MySharedPtr::copy(const MySharedPtr& right) {
	// reasign all this objects pointers to that of the other object	
	this->ptr = right.ptr;
	this->count = right.count;

	// now increment the count because there is another reference to the underlying data
	// but only if the pointer is not null
	if (right.ptr != nullptr) {
		(*this->count)++;
	}
}

void MySharedPtr::clean() {
	(*count)--; // decrement the reference counter
	if (*count == 0) {
		// no more references, free up memory
		delete[] ptr;
		delete count;
	}
}

void MySharedPtr::move(MySharedPtr&& right) {
	// just steal the resources from the other shared pointer object
	this->ptr = right.ptr;
	this->count = right.count;

	// just give the dying object null pointers since it is about to be destroyed anyway
	right.ptr = nullptr;
	right.count = nullptr;
}

MySharedPtr::MySharedPtr() : ptr(nullptr), count(new int(0)) {};

MySharedPtr::MySharedPtr(int size) : ptr(new float[size]), count(new int(1)) {};

MySharedPtr::MySharedPtr(const MySharedPtr& right) : ptr(nullptr), count(nullptr) {
	copy(right);	
}

MySharedPtr& MySharedPtr::operator=(const MySharedPtr& right) {
	clean();
	copy(right);
	return *this;
}

MySharedPtr& MySharedPtr::operator=(MySharedPtr&& right) {
	clean(); // get rid of the current reference
	move(right);
	return *this;
}



