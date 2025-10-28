#include<iostream>

using namespace std;

/*
Simple 2x2 matrix class that we will use for our buffer example
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

class FIFOMatBuffer {
private:
	size_t size; // size off our FIFO buffer
	Matrix* head; // "head", the top of the buffer
	Matrix* tail; // "tail", the bottom of the buffer
public:
	FIFOMatBuffer(size_t n) : head(new Matrix[n]), tail(NULL), size(n) { tail = head; }; // only use a default constructor for now
	
	// Add a matrix to the buffer, but only if it will fit in the remaining buffer
	FIFOMatBuffer& operator+=(const Matrix& right) {
		if ((head - tail) < size) {
			*head = right;
			head++;
		} else {
			cout << "Buffer is full\n";
		}
		return *this;
	}

	// get the next element in the buffer, but only if the buffer is non-empty
	Matrix getNext() {
		Matrix out;
		if (head != tail) {
			head--;
			out = *head;
		} else {
			cout << "Buffer is empty\n";
		}
		return out;
	}		

	// destructor to free up the memory that the class allocates
	~FIFOMatBuffer() {
		delete[] tail;
	}
};

int main() {
	Matrix M(1, 2, 3, 4);
	Matrix M2(1,1,1,1);
	Matrix M3(2,2,2,2);
	M.print();

	/* Here we make a FIFO (first in, first out) buffer. These are very useful for things like your operating system and lower-level programming. But they can still show up in higher-level situations all the time. Whenever we have a process that isn't infinitely fast, we can buffer the data we feed in using a structure like this. 
	*/
	FIFOMatBuffer B(3);
	// We make the buffer and give it a specified size. The space that the buffer allocates is technically static, but we will allocate it onto the heap, so that the rest of our program can keep running without having to worry about keep track of that data.
	B += M; // each time we add a matrix, it copies the contents of that matrix into the next slot on the heap
	B += M2; // the slot is addressed by the private variable "head"
	B += M3;
	B += M2; // once the buffer is full, it stops adding data and incrementing the head pointer
	
	for (int i=0; i < 4; ++i) {
		B.getNext().print(); // note how once we've used up the whole buffer, it won't let us take any more
	}

	// This is yet another great example of why you would use encapsulation to make the head and tail pointers not accessable to the rest of the program. If somebody else could mess with them, we could easily loose track of the data in our buffer or loose the ability to check the remaining space
}
