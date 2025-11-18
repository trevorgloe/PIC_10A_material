#include<iostream>

class IntArray {
private:
	int* data;
	size_t size;

public:
	// Default contructor
	IntArray(std::size_t n) : data(new int[n]()), size(n) {};
	
	void insert(int val, std::size_t i) {
		data[i] = val;
	}

	// Copy constructor

	// Move constructor

	// Copy assignment operator

	// Move assignment operator

	// write += operator

};

int main() {
	IntArray v(10);
	for (int i=0; i<10; ++i) {
      		v.insert(i,i);
	}
	// IntArray w(v);
}
