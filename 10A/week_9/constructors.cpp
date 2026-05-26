#include <iostream>
#include <vector>

using namespace std;

struct Mat {
  float a11;
  float a12;
  float a21;
  float a22;

  Mat(float a11_, float a12_, float a21_, float a22_)
      : a11(a11_), a12(a12_), a21(a21_), a22(a22_) {}

  Mat(float a) : a11(a), a12(a), a21(a), a22(a) {}
  Mat() : a11(0), a21(0), a12(0), a22(0) {}
};

int main() {
  // when we originally made structs, we would just initialize them like this
  Mat A;
  A.a11 = 1;
  A.a12 = 2;
  A.a21 = 2;
  A.a22 = 0.5;
  // this is fine, but we may want some specific ways to initialize our struct,
  // and it would be nice to be able to control exactly how it is put together
  // constructors allow us to change this interface

  // now notice that our original way to initializing doesn't work, and we
  // initialize like this
  Mat B(1, 2, 2, 0.5); // a little cleaner huh?

  // The nice thing is that we can overload this function so there can be
  // several constructors, all of which create the matrix in different ways
  Mat C(1); // makes all entries 1
  Mat D;    // this is a special one called the 'default constructor'

  return 0;
}
