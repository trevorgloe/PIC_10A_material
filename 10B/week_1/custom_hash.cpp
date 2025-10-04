#include<iostream>
#include<unordered_set>

using namespace std;

class MyObject {
public:
	MyObject(int a_, int b_) : a(a_), b(b_) {}
	int sum() const {
		return a + b;
	}

	// need the equality operator as well as a hash
	bool operator==(const MyObject& obj) const {
		bool b1 = this->sum() == obj.sum();
		return b1;
	}
private:
	int a;
	int b;
};

class MyObjectHash {
public:
	size_t operator()(const MyObject& obj) const
	{
		// hash will just be the sum of the two member variables
		return obj.sum();
	}
};

int main() {
	// create two instances of MyObject
	MyObject o1(1,2); // will have the hash 3
	MyObject o2(2,2); // will have the hash 4
	
	unordered_set<MyObject, MyObjectHash> myset;
	myset.insert(o1);
	myset.insert(o2);
	cout << "I made a unordered set of custom objects\n";

	cout << myset.count(o1) << "\n";
	return 0;
}
