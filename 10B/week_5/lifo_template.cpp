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

};

int main() {
	Matrix M(1, 2, 3, 4);
	Matrix M2(1,1,1,1);
	Matrix M3(2,2,2,2);
	M.print();

	return 0;
}
