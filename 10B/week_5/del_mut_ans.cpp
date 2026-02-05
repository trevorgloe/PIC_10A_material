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
	mutable double ans;
public:
	B(std::vector<double> d) : d1(d), ans(0) {}
	double sum() const {
		if (ans == 0) {
			for (int i =0; i < d1.size(); ++i) {
				ans += d1[i];
			}
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
	When you have a implicit way to convert to an int, and an implicit way to construct from an int, you have a problem with "overload resolution". This means that the compiler has difficulty determining which implicit casting avenue is the best, and in this case, can't decide at all. 
	If we make the casting operator as explicit, this eliminates the problem, but it means that functions which take in an int will not work without an overload that takes in an instance of A
	If we make the constructor explicit, this eliminates the problem but it makes functions like the operator+ we have defined not work as written. We have to invoke the constructor explicitly, which dilutes the functionality
	If we want the user to think of our data type like its effectively an int, we want some implicit casting and constructing, but we have to favor a direction. Typically, favoring the build-in data types is less work
	*/

	/*
	In the above class B, we have a vector of doubles, suppose that we will want to get the sum of all the elements many many times without actually changing the vector. We don't want to make the sum function non-const because we want it to still work with const instances. How can we reduce the number of computations with a mutable variable? And why does it work?	
	*/
	vector<double> v(10000000, 3.2);
	const B obj2(v);
	for (int j = 0; j < 100; ++j) {
		cout << obj2.sum() << "\n";
	}
	/* 
	By using a mutable variable to store the answer to the sum if we've already computed it, we only actually compute the sum once and then just return the stored value. We can maintain this functionality for a const instance but using a mutable variable rather than a normal member variable. This makes sense because the actual data for the object (the vector) does not really change when we compute that sum.	
	Another situation in which a mutable variable is viable is for a mutex, which is a way to make sure that parallel threads do not fight over resources. A mutex basically locks a thread so that nothing else will access those resources until the thread is done. Because a mutex is typically not part of the 'actual' data, it is often mutable.
	*/
	return 0;
}
