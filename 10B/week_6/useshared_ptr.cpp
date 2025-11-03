#include"myshared_ptr.hpp"
#include<iostream>

using namespace std;

// lets test out our shared pointer
int main() {
	MySharedPtr p1(10); // create a shared pointer for space in memory of 10 floats
	cout << *p1.getRefs() << "\n";	
	MySharedPtr p2 = p1; // use copy constructor
	for (int i=0; i < 10; ++i) {
		p1.getPtr()[i] = i / 10.0;
	}
	cout << *p2.getRefs() << "\n";
	
	for (int i=0; i < 10; ++i) {
		cout << *(p2.getPtr() + i) << " ";
	}
	cout << "\n";

	{
		MySharedPtr p3(p2);
		cout << *p3.getRefs() << "\n";
	}
	cout << *p2.getRefs() << "\n";


	// practice: for each of the following entities, say whether it is an l-value or r-value
	const int& y = 32;
	double* x = new double[y];
	cout << &(x[5]) << "\n";
	cout << x << "\n";


	return 0;
}
