#ifndef DIS1B_CLASS
#define DIS1B_CLASS

/*
A shared pointer is an object that keeps track of how many references to the underlying data exist in the program at a given time
*/
class MySharedPtr {
private:
	float* ptr;
	int* count;

public:
	MySharedPtr();
	MySharedPtr(const MySharedPtr& right); // copy constructor
	
	MySharedPtr& operator=(const MySharedPtr& right); // copy assignment operator
	
	MySharedPtr(MySharedPtr&& right); // move constructor
	MySharedPtr& operator=(MySharedPtr&& right); // move assignemnt operator
	
	~MySharedPtr();
};

#endif
