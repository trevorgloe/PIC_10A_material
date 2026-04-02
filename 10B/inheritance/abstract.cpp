#include<iostream>

class AbstractMatrix 
{
protected:
	std::size_t dim;
public:
	virtual void print() const = 0;
};

class TwoByTwoMatrix : public AbstractMatrix
{
private:
	float a11;
	float a12;
	float a21;
	float a22;
public:
	TwoByTwoMatrix(float a11_, float a12_, float a21_, float a22_) : a11(a11_), a12(a12_), a21(a21_), a22(a22_) {
		dim = 2;
	}

	virtual void print() const {
		std::cout << "[ " << a11 << " " << a12 << "\n";
		std::cout << a21 << " " << a22 << "]\n";
	}
};

int main() {
	TwoByTwoMatrix A(1, 1, 2, 2);
	AbstractMatrix B;
	return 0;
}
