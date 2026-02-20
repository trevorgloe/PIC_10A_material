# PIC 10B Practice Midterm Questions and Solutions
Solutions to questions are included at the end of the document, below the statement of all the questions. 

The questions are from a practice midterm of Xue Feng, teaching PIC10B at UCLA. 

## Part 1: Move and Copy Semantics
You are given a class IntArray that manages a dynamically allocated array of integers. The
class constructor allocates memory for an array of the given size. Your task is to write a
correct copy constructor and move constructor for this class.

```cpp
class IntArray {
private:
    int* data;
    size_t size;
public:
    // Default constructor
    IntArray(std::size_t n): data(new int[n]()), size(n) {}
    // TODO: Write the copy constructor below, say IntArray(const IntArray& other)
    //I will not provide signature for real midterm
    // TODO: Write the move constructor below,say, IntArray(IntArray\&\& other)
    // TODO: Write the copy assignment below,
    //say IntArray& operator=(const IntArray& other)
    // TODO: Write the move assignment below,
    //say IntArray& operator=(IntArray&& other)
    // TODO: Write the += operator to realize element-wise addition of another IntArray
    // If ’other’ is larger, expand *this and pad original data with 0.
    // If ’other’ is smaller, treat missing elements as 0 from ’other’.
    // say IntArray& operator+=(const IntArray& other)
};
```

## Part 2: True/False
Mark each statement as True (T) or False (F).

1. If an entity has a name, it is an l-value
2. Everything that is not an l-value is an r-value.
3. A string literal (e.g., "Hello") is considered an l-value in C++.
4. We are not allowed to take the address (using &) of an r-value in standard C++ code.
5. An r-value reference (e.g., int&&) can extend the lifetime of the temporary it is bound to.
6. Returning by value from a function always produces an l-value.

## Part 3: Multiple Choice
Select the single best answer for each question.

1. Which of the following expressions is definitely an x-value?
    1. `std::move(i)`, where `int i = 0;`
    2. `10`
    3. `&i`
    4. `v[4];` where `std::vector<int> v(8);`
    5. `i`, where `int i = 42;`
    6. `i + 2`, where `int i = 42;`
    7. `std::string("Hi")`
    8. `std::move(i)`, where `int i = 42;`
    9. The result of `rf(i)` given `int& rf(int& i);`
    10. The result of `vl(i)` given `int vl(int i);`


2. Which statement is correct about l-value references `int&`?
    1. They can bind to r-values freely.
    2. They can only bind to l-values (unless it’s const int&).
    3. They cannot bind to const objects at all.
    4. They must always be declared const.

## Part 4: What is the output of the following code? If it does not build, write NO OUTPUT and explain why
### Question 1
```cpp
#include <iostream>
using namespace std;

class C {
public:
    explicit C(int x) : i(x) {}
    C(double) = delete;
    // Convert C to int
    operator int() const { return i; }

private:
    int i;
};

int main() {
    C c1(42);
    C c2(3.14); // (A) Uncomment this line if you wish to test
    int x = c1;
    cout << x << endl;
    return 0;
}
```

### Question 2
```cpp
#include <iostream>
using namespace std;

class C {
public:
    explicit C(int x) : i(x) {}
    // Convert C to int
    operator int() const { return i; }

private:
    int i;
};

int main() {
    C c2(3.14); // (A) Uncomment this line if you wish to test
    int x = c2;
    cout << x << endl;
    return 0;
}
```

### Question 3
```cpp
#include <iostream>
using namespace std;

class E {
public:
    E(int _i) : i(_i), counter(0) {}
    int get() const { ++counter; return i; }
    void set(int _i) { ++counter; i = _i; }
    int printCount() const { return counter; }

private:
    int i;
    mutable int counter;
};

int main() {
    E e(8);
    cout << e.get() << " ";
    e.set(88);
    // 1
    Page 4cout << e.get() << " ";
    e.set(888);
    cout << e.get() << " ";
    // 2
    // 3
    cout << e.printCount() << endl;
    return 0;
}
```

## Part 5 - The following copy assignments for string are not correct, explain why
### Example 1
```cpp
string& string::operator=(const string& other) {
    ptr = new char[other.siz + 1];
    for (size_t i = 0; i <= other.siz; ++i) {
        ptr[i] = other.ptr[i];
    }
    siz = other.siz;
    return *this;
}
```

### Example 2
```cpp
string& string::operator=(const string& other) {
    delete[] ptr;
    ptr = new char[other.siz + 1];
    for (size_t i = 0; i <= other.siz; ++i) {
        ptr[i] = other.ptr[i];
    }
    siz = other.siz;
    return *this;
}
```

# Practice Midterm Solutions
## Part 1 - Copy and Move Semantics
```cpp
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

	// Copy assignment operator - uses the copy-swap idiom
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
			delete[] this->data; // clean up the memory once we've copied over all the data
			this->data = temp;
			this->size = right.size;
		}
		return *this;
	}

	~IntArray() {
		delete[] data;
	}

};
```

## Part 2 - True/False

1. If an entity has a name, it is an l-value - **False - but only because of the keyword `this`, all other named entities are l-values**
2. Everything that is not an l-value is an r-value. - **True - we can actually just take this to be the definition of an r-value**
3. A string literal (e.g., "Hello") is considered an l-value in C++. - **True - string literals are the only literals which are l-values, all other literals are r-values**
4. We are not allowed to take the address (using &) of an r-value in standard C++ code. - **True - this is the real distinguishing feature between l and r values**
5. An r-value reference (e.g., int&&) can extend the lifetime of the temporary it is bound to. - **True**
6. Returning by value from a function always produces an l-value. - **False - in fact, returning by value from a function produces an r-value**


## Part 3 - Multiple Choice

1. Which of the following expressions is definitely an x-value?
    1. `std::move(i)`, where `int i = 0;` - **definitely an x-value**
    2. `10` - **definitely a pr-value**
    3. `&i` - **definitely a pr-value (this one can be tricky because `i` is an l-value but `&i` returns the memory address of `i`, which is an r-value**
    4. `v[4];` where `std::vector<int> v(8);` - **an l-value, the access operator for a vector returns by reference**
    5. `i`, where `int i = 42;` - **definitely an l-value**
    6. `i + 2`, where `int i = 42;` - **definitely a pr-value**
    7. `std::string("Hi")` - **definitely a pr-value**
    8. `std::move(i)`, where `int i = 42;` - **definitely an x-value**
    9. The result of `rf(i)` given `int& rf(int& i);` - **definitely an l-value**
    10. The result of `vl(i)` given `int vl(int i);` - **definitely a pr-value**


2. Which statement is correct about l-value references `int&`?
    1. They can bind to r-values freely. - **False, they cannot bind to an r-value unless they are const**
    2. They can only bind to l-values (unless it’s const int&). - **True**
    3. They cannot bind to const objects at all. - **True (for non-const references), otherwise you would violate const-correctness**
    4. They must always be declared const. - **False**


## Part 4 - What is the output of the following code? If it does not build, write NO OUTPUT and explain why

### Question 1
```cpp {numberline}
#include <iostream>
using namespace std;

class C {
public:
    explicit C(int x) : i(x) {}
    C(double) = delete;
    // Convert C to int
    operator int() const { return i; }

private:
    int i;
};

int main() {
    C c1(42);
    C c2(3.14); // (A) Uncomment this line if you wish to test
    int x = c1;
    cout << x << endl;
    return 0;
}
```
Build error. The code will not build because on line 14, we call `C c2(3.14)` which will try to call `C(double)`. But we explicitly deleted this constructor, so a build error will be thrown. Using the delete keyword in this way is a good way to ensure that anybody who tries to call that constructor will get an error (which you often want because you don't want people to call that constructor!).

### Question 2
```cpp
#include <iostream>
using namespace std;

class C {
public:
    explicit C(int x) : i(x) {}
    // Convert C to int
    operator int() const { return i; }

private:
    int i;
};

int main() {
    C c2(3.14); // (A) Uncomment this line if you wish to test
    int x = c2;
    cout << x << endl;
    return 0;
}
```
The code will build and output `3`. When the constructor is called, implicit casting will happen to change `3.14` to `3`. Then an instance of class `C` will be created (called `c2`) which has member variable `i=3`. Then, when we cast `c2` into an `int` via line 16, we just get the value of `i`, which is `3`. 

A potential pitfall here is thinking that, because the constructor for `C` has the `explicit` keyword, we cannot have implicit casting of the arguments. This is not the case. Instead `explicit` prevents us from writing a line like `C c3 = 1;` because we are not "explicitly" invoking the constructor.
