#include<iostream>

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

Vec3::Vec3(double x, double y, double z) : data(new double[3]) {
	*data = x;
	*(data + 1) = y;
	*(data + 2) = z;
}

Vec3::Vec3(const Vec3& v) : data(new double[3]) {
	*data = v[0];
	*(data + 1) = v[1];
	*(data + 2) = v[2];
}

Vec3::~Vec3() {
	delete[] data;
}

double Vec3::operator[](int i) const {
	if (i < 3) {
		return *(data + i);
	} else {
		return 0;
	}
}

// dot product
double operator*(Vec3& left, Vec3& right) {
	float tot = 0.0;
	for (int i=0; i<3; ++i) {
		tot += left[i] * right[i];
	}
	return tot;
}

// cout
ostream& operator<<(ostream& out, const Vec3& v) {
	out << "[" << v[0] << " " << v[1] << " " << v[2] << "]\n";
	return out;
}

int main() {
	Vec3 v(1,2,3);
	Vec3 w(v);
	Vec3 u(2,1,-1);

	cout << v;
	cout << w;
	cout << v*w << "\n";
	return 0;
}
