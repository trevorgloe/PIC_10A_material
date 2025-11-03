#ifndef MYSHARED_PTR
#define MYSHARED_PTR

/*
Shared pointer class to hold a float array. This is a smart pointer that will keep track of how many different references to the data exist. It will automatically delete the memory for that data only when there are no more references to it
*/
class MySharedPtr {
private:
	float* ptr;
	int* count;
	void copy(const MySharedPtr& right); // function to make copying easier (since multiple functions need to do it)
	void clean(); // function to make the count decrementing easier (used when an object is going to stop referencing something)
	void move(MySharedPtr&& right); // function to make the moving easier, since multiple things do it

public:
	// constructors
	MySharedPtr();
	MySharedPtr(int size);
	MySharedPtr(const MySharedPtr& right);

	// copy assignment 
	MySharedPtr& operator=(const MySharedPtr& right);

	// move asignment
	MySharedPtr& operator=(MySharedPtr&& right);

	// move constructor
	MySharedPtr(MySharedPtr&& right);

	// useful functions
	int* getRefs();
	float* getPtr();

	// destructor
	~MySharedPtr();
};
	

#endif
