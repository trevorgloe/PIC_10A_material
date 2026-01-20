#include<iostream>
#include<string>
#include<vector>

using namespace std;

float avg(vector<int>& v) {
	// sum the results and divide by size
	float tot = 0.0;
	for (int el : v) {
      		tot += el;
      	}
	return tot / v.size();
}

string& good_fnc(string& s) {
	for (int i=0; i < s.size(); ++i) {
      		s.at(i) += 'A' - 'a';
      	}
	return s;
}

string& bad_fnc(string& s) {
	string t;
	for (int i=0; i < s.size(); ++i) {
		t.push_back(s.at(i) + 'A' - 'a');
	}
	return t;
}

float& getElem(vector<float>& v, int idx) {
	return v[idx];
}

int& returnStat() {
	static int a = 3;
	a++;
	return a;
}

class MyObj {
private:
	int val;
public:
	MyObj(int val_) : val(val_) {};
	int& give() {return val;};
};

int passbyref(int& a) {
	return 2*a;
}

int passbypoint(int* a) {
	return 2*(*a);
}

int main() {
	// Lets talk some more about references. Specifically, lets talk a bit about returning by reference. 
	
	// For a little review, we can create a reference to any type like so
	int a = 2; // an int
	int& ar = a; // a reference to the int a
	// If we change a
	a++;
	// we see that ar changed as well
	cout << a << " " << ar << "\n";
	// we cannot initialize a reference like this
	// int& br = 3; <- gives a build error
	// The reason for this is whats called value categories and has to do with if the object is considered "temporary" to C++
	
	// The main reason we care about references (so far) is for passing into functions
	vector<int> v(100,4); // this vector is big, we don't want to have to copy over the whole thing when we call my function
	cout << avg(v) << "\n";

	// We can also return by reference, and this works more or less the same
	string s = "my lowercase string";
	string& t = good_fnc(s);
	cout << t << "\n"; 
	// Why is this one good? Because:
	// We received data via a reference so the data we manipulated was outside the scope of the function, we then returned by reference because we were returning something outside the scope of the function
	// We used this return by reference to initialize a string reference, which we would not have been able to do if the function did not return by reference
	cout << s << "\n"; // note that because we're passing by reference, s also changes
	
	// Now lets do the absolute WORST thing you can possibly do in C++
	string s2 = "newlower";
	// string t2 = bad_fnc(s2); ran this once and got a segmentation fault, I'm too scared to run it any more
	// cout << t2 << "\n";
	
	// now, many functions will return by reference to const, but in doing this you need to be careful with how those reference to const interact with temporary variables
	// I wont show any examples, because frankly, they are a little dumb, but suffice to say, tread carefully
	
	// One thing I will say, if often times if we want to return something not by value, it is often better to not do it this way. The more transparent way is often to manually allocate memory on the heap (using the "new" keyword) and then pass around pointers to this memory. Doing this avoids some of the weird semantics that come with references to const and such
	
	// practice!
	// I have a function called getElement(...) above. What will happen with the following function call?
	vector<float> w = {1.0, 1.1, 1.2, 1.3, 1.4};
	getElem(w, 2)++;
	cout << w[2] << "\n";
	// This shows a good use of returning by reference, you giving you a reference to an object you care about
	
	// Question: what would happen if you were to have a function that returned a reference to a static variable?
	// Ok, now what could be the issues with doing this, consider the function I wrote above
	int& r1 = returnStat();
	int& r2 = returnStat();
	cout << r1 << "\n";
	cout << r2 << "\n";
	
	// Lets say we want a class MyObj with an integer member variable. We want to run the following code without error
	MyObj A(1); // initialize the member variable
	int& k = A.give();

	// Interview question (that I have actually been asked!) 
	// What is the difference between pass-by-reference and pass-by-pointer?
	// I am looking for not just the syntax, but also what it actually means and why one may be better than the other
	int j = 2;
	cout << passbyref(j) << "\n";
	cout << passbypoint(&j) << "\n";
	// Important part: references can never be null!
	// This means you don't need to worry about things like null-pointer deferences when passing by reference (there still can be dangling references however) 
	// Generally speaking, passing by reference will be better than passing by pointer if possible
	
	return 0;
}
