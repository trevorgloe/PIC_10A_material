#include<iostream>

/* Lets make a class to store a 3D vector on the heap. 
The class should have a constructor, a copy constructor, a destructor and store its data (3 doubles) on the heap. Also overload the * operator for the dot product
*/
using namespace std;

class Vec3 {
private:
	double* data;

public:
	// constructors
	Vec3(double x, double y, double z);
	Vec3(const Vec3& v);

	// destructor
	~Vec3();

	// access operator
	double operator[](int i) const;
};

// dot product
double operator*(Vec3& left, Vec3& right) {
	return 0;
}

// cout
ostream& operator<<(ostream& out, const Vec3& v) {
	out << "[" << v[0] << " " << v[1] << " " << v[2] << "]\n";
	return out;
}

int main() {
	Vec3 v(1,2,3);
	Vec3 w(v);

	cout << v;
	cout << w;
	return 0;
}
