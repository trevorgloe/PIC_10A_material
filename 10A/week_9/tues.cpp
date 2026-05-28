#include <iostream>

using namespace std;

struct Mat {
  float a11;
  float a12;
  float a21;
  float a22;

  Mat(float a11_, float a12_, float a21_, float a22_)
      : a11(a11_), a12(a12_), a21(a21_), a22(a22_) {};
  Mat(float a) : a11(a), a12(a), a21(a), a22(a) {};
  Mat() : a11(0), a12(0), a21(0), a22(0) {};
};

int main() {
  // what we've been doing
  Mat A;
  A.a11 = 1.0;
  A.a12 = 2.0;
  A.a21 = 2.0;
  A.a22 = 0.5;

  // now we do
  Mat B(1, 2, 2, 0.5);
  Mat C(0.5);

  return 0;
}
