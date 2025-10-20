#include<iostream>
#include<vector>
#include<set>

using namespace std;

class Mesh {
private:
	set<float> data; // points in mesh
	int n; // number of points in the mesh
	float upper;
	float lower;

public:
	Mesh(vector<float> pre) : data(), n(0), upper(0), lower(0) {
		upper = 0;
		lower = 0;
		for (float el : pre) {
			if (el > upper) {
				upper = el;
			}
			if (el < lower) {
				lower = el;
			}
       			data.insert(el);
       		}
	}

	void print() {
		for (float el : data) {
       			cout << el << " ";
       		}
		cout << "\n";
	}

	void add_pt(float x) {
		// check if point is within the range
		if (x < lower || x > upper) {
			cout << "Value is out of range, cannot add the point\n";
			return;
		}
		data.insert(x);
	}

	set<float> get_set() const {
		return data;
	}

	Mesh& operator+=(const Mesh& right) {
		// be able to add multiple meshes but making the union
		for (const float el : right.get_set()) {
			if (el > lower && el < upper) {
				data.insert(el);
			}
		}
		return *this;
	}

	Mesh& operator+=(const float& right) {
		if (right > lower && right < upper) {
			data.insert(right);
		}
		return *this;
	}
};

// comparison operator
bool operator<(const Mesh& left, const Mesh& right) {
	// if right contains all of left, then return true, otherwise return false
      	bool comp = true;
	for (float el : left.get_set()) {
      		if (!right.get_set().count(el)) {
      			comp = false;
      			break;
      		}
      	}
	return comp;
}

int main() {
	// Lets see any example of operator overloading for an example we made for the integrator
	// We want a class that represents the mesh for the integrator (points x1, ..., xn that we use for the edges of the rectanngles)
	vector<float> v = {0.0, 0.3, 0.6, 0.9, 1.0};
	Mesh m(v);
	m.print();

	m.add_pt(0.95);
	m.add_pt(1.1);
	m.print();

	m+= 0.55;
	m.print();

	Mesh m2({});
	m2+=1.0;
	m2+=0.0;
	m2+=0.6;
	bool comp = m2 < m;
	cout << comp << "\n";

	// Some things to say about this:
	// 1. Notice the use of const for the arguments into most of the operator functions
	// 2. Notice how only member functions can make changes to the data, and only member functions have access to the upper and lower points. This is called encapsulation
	// Encapsulation is obfuscating (hiding) the details of your object; here are the two main benefits
	// 	1. Making sure the class can never be put into an incorrect or nonsense state
	// 	2. If somebody else's code depends on yours, you could now change the implementation of your class under the hood without messing up the dependent code (important)
	return 0;
}
