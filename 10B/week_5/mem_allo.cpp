#include<iostream>
#include<cassert>

using namespace std;

/*
Simple 2x2 matrix class that we will use for our stack example
Nothing fancy, just a constructor and it stores 4 float values
*/
class Matrix {
public:
	Matrix(float _a11, float _a12, float _a21, float _a22) : a11(_a11), a12(_a12), a21(_a21), a22(_a22) {}; // constructor
	Matrix() : a11(0), a12(0), a21(0), a22(0) {}; // need this default constructor to allocate memory

	void print() const {
		cout << a11 << " " << a12 << "\n" << a21 << " " << a22 << "\n";
	}

private:
	float a11;
	float a12;
	float a21;
	float a22;
};

class LIFOMat {
private:
	size_t size; // size off our stack
	Matrix* head; // "head", the top of the stack 
	Matrix* tail; // "tail", the bottom of the stack 
	friend void move_LIFOMat(LIFOMat& from, LIFOMat& to);
public:
	LIFOMat(size_t n) : head(NULL), tail(new Matrix[n]), size(n) { head = tail; }; // only use a default constructor for now
	
	// Add a matrix to the stack, but only if it will fit in the remaining stack 
	LIFOMat& operator+=(const Matrix& right) {
		if ((head - tail) < size) {
			*head = right;
			head++;
		} else {
			cout << "Stack is full\n";
		}
		return *this;
	}

	// get the next element in the stack, but only if the stack is non-empty
	Matrix getNext() {
		Matrix out;
		if (head != tail) {
			head--;
			out = *head;
		} else {
			cout << "Stack is empty\n";
		}
		return out;
	}		

	// destructor to free up the memory that the class allocates
	~LIFOMat() {
		delete[] tail;
	}
};

/*
Move the data from one LIFO mat to another by transfering the pointers
Runs in O(1) time because it just has to copy 2 points, and nullify 2 pointers
Once it is done running, A is NOT usable because we got rid of its data. This is the idea of "moving" rather than "copying" 
If we wanted to be able to copy the data without copying the matrices but rather just have 2 stacks who both own the same matrices on the heap, we would have to use a "shared pointer"
*/
void move_LIFOMat(LIFOMat& A, LIFOMat& B) {
	// suppose that "to" has been initialized to be the same size as "from"
	// first we need to delete the data that to had previously been holding
	delete[] B.tail;
	// next copy the pointers from "from" to "to"
	B.tail = A.tail;
	B.head = A.head;
	// now set A to nullpointers so the deleting doesn't give us any problems
	A.tail = nullptr; // we can safely delete A without messing up the data that is now in B
	A.head = nullptr;
}

int main() {
	Matrix M(1, 2, 3, 4);
	Matrix M2(1,1,1,1);
	Matrix M3(2,2,2,2);
	M.print();

	/* Here we make a LIFO (last in, first out) data structure (also called a stack). These are very useful for things like your operating system and lower-level programming. But they can still show up in higher-level situations all the time. Whenever we have a process that isn't infinitely fast, we can buffer the data we feed in using a structure like this. 
	*/
	LIFOMat B(3);
	// We make the stack and give it a specified size. The space that the stack allocates is dependent on the input to the constructor and we will allocate it onto the heap, so that the rest of our program can keep running without having to worry about keep track of that data.
	B += M; // each time we add a matrix, it copies the contents of that matrix into the next slot on the heap
	B += M2; // the slot is addressed by the private variable "head"
	B += M3;
	B += M2; // once the stack is full, it stops adding data and incrementing the head pointer
	
	for (int i=0; i < 4; ++i) {
		B.getNext().print(); // note how once we've used up the whole stack, it won't let us take any more
	}

	// This is yet another great example of why you would use encapsulation to make the head and tail pointers not accessable to the rest of the program. If somebody else could mess with them, we could easily loose track of the data in our buffer or loose the ability to check the remaining space
	
	// Interview-style question: Write a function to move a LIFOMat stack. It should run in O(1) time no matter how big the matrices are, and after moving the stack, the moved-from stack will not be used. 
	// Hint - you should not be copying matrices
}
