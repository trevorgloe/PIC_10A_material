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
	IntArray(const IntArray& right) : data(new int[right.size]()), size(right.size) {
		// move the data over one element at a time
		for (int i=0; i < size; ++i) {
			data[i] = right.data[i];
		}
	}

	// Move constructor
	IntArray(IntArray&& right) : data(nullptr), size(0) {
		// just swap the data since right is about to deleted
		std::swap(data, right.data);
		std::swap(size, right.size);
	}

	// Copy assignment operator
	IntArray& operator=(const IntArray& right) {
		// account for self-assignment
		if (this == &right) {
			return *this;
		}
		IntArray copy(right); // right is an l-value so it will bind correctly here
		// swap the data because copy is temporary
		std::swap(data, copy.data);
		std::swap(size, copy.size);
		return *this;
	}

	// Move assignment operator
	IntArray& operator=(IntArray&& right) {
		std::swap(data, right.data);
		std::swap(size, right.size);
		return *this;
	}

	// write += operator
	IntArray& operator+=(const IntArray& right) {
		if (right.size < this->size) {
			// pad right with zeros
			for (int i=0; i<right.size; ++i) {
				this->data[i] += right.data[i];
			}
		} else {
			// make this bigger
			int* temp = new int[size]();
			for (int i=0; i<size; ++i) {
				temp[i] = this->data[i] + right.data[i];
			}
			for (int i=size; i<right.size; ++i) {
				temp[i] = right.data[i];
			}
			delete[] this->data;
			this->data = temp;
			this->size = right.size;
		}
		return *this;
	}

	~IntArray() {
		delete[] data;
	}

};

int main() {
	IntArray v(10);
	for (int i=0; i<10; ++i) {
      		v.insert(i,i);
	}
	// IntArray w(v);
}
