#ifndef DIS1A_CLASS
#define DIS1A_CLASS

/*
A shared pointer is a pointer that keep track of how many references to that data currently exist in the program
*/
class MySharedPtr {
public:
	MySharedPtr();
	MySharedPtr(int size);
	// copy constructor
	MySharedPtr(const MySharedPtr& right);
	// move constructor
	MySharedPtr(MySharedPtr&& right);
	
	// copy assignment operator
	MySharedPtr& operator=(const MySharedPtr& right);
	// move assignment operator
	MySharedPtr& operator=(MySharedPtr&& right);

	~MySharedPtr();
private:
	// this will point to an array of floats
	float* ptr;
	int* count;
};

#endif
