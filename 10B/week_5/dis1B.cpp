#include<iostream>

using namespace std;

// Simple matrix class
class Matrix {
public:
	Matrix(float _a11, float _a12, float _a21, float _a22) : a11(_a11), a12(_a12), a21(_a21), a22(_a22) {};
	Matrix() : a11(0), a12(0), a21(0), a22(0) {};

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
	size_t size;
	Matrix* head;
	Matrix* tail;
public:
	LIFOMat(size_t n) : head(NULL), tail(new Matrix[n]), size(n) { head = tail; };

	LIFOMat& operator+=(const Matrix& right) {
		if ((head - tail) < size) {
			*head = right;
			head++;
		} else {
			cout << "Stack is full\n";
		}
		return *this;
	}

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

	~LIFOMat() {
		delete[] tail;
	}
};

int main() {
	// Lets make a LIFO (stack) data structure
	Matrix M(1,2,3,4);
	LIFOMat B(3);
	Matrix M1(1,1,1,1);
	B+= M;
	B+= M1;
	B+= M;
	B+= M1;
	B.getNext().print();
	return 0;
}
