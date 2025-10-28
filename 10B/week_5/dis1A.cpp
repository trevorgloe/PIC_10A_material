#include<iostream>
#include<cassert>

using namespace std;

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

class FILOMatBuffer {
private:
	size_t size; // size of FILO buffer
	Matrix* head;
	Matrix* tail;
public:
	FILOMatBuffer(size_t n) : head(new Matrix[n]), tail(NULL), size(n) { tail = head; };

	FILOMatBuffer& operator+=(const Matrix& right) {
		assert((head - tail) < size);
		// if ((head - tail) >= size) {
		// 	cout << "Buffer is full\n";
		// }
		*head = right;
		head++;
		return *this;
	}

	Matrix getNext() {
		Matrix out;
		// assert(head > tail);
		if (head != tail) {
			head--;
			out = *head;
		} else {
			cout << "Buffer is empty\n";
		}
		return out;
	}

	~FILOMatBuffer() {
		delete[] tail;
	}
};

int main() {
	FILOMatBuffer B(3);
	Matrix M(1,2,3,4);
	Matrix M1(1,1,1,1);
	B+= M;
	B+= M;
	B+= M1;

	for (int i = 0; i < 4; ++i) {
		B.getNext().print();
	}
	return 0;
}
