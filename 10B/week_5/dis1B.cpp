#include<iostream>
#include<vector>

class A {
	friend A operator+(A left, A right);
private:
	int a;
public:
	A(int a_): a(a_) {}
	operator int() {
		return a;
	}
};

A operator+(A left, A right) {
	return left.a + right.a;
}

class B {
private:
	std::vector<double> d1;
public:
	B(std::vector<double> d) : d1(d) {}
	double sum() const {
		double ans = 0;
		for (int i =0; i < d1.size(); ++i) {
			ans += d1[i];
		}
		return ans;
	}
};

using namespace std;

int main() {
	/* Below are some interview-style questions about the explicit, delete, and mutable keywords
	
	*/

	/*
	Above is a class called A, with a constructor taking in an int and a casting operator to an int.
	The below code has an error. Describe how you can fix the error with the explicit keyword.
	- Which choice is better in what context? What is the downside of each?
	*/
	A obj(2);
	// cout << obj + 10 << "\n";

	/*
	In the above class B, we have a vector of doubles, suppose that we will want to get the sum of all the elements many many times without actually changing the vector. We don't want to make the sum function non-const because we want it to still work with const instances. How can we reduce the number of computations with a mutable variable? And why does it work?	
	*/
	vector<double> v(10000000, 3.2);
	const B obj2(v);
	for (int j = 0; j < 100; ++j) {
		cout << obj2.sum() << "\n";
	}
	/* 
	- Does using a mutable variable violate const-correctness?
	- What is the danger of using a lot of mutable variables?
	- When is it ok to use a mutable variable and when is it not? From a design perspective
	*/
	
	return 0;
}
