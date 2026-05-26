#include <iostream>
#include <vector>
// what is the error with the following code?

using namespace std;

struct S {
  vector<int> v;
  float f;

  S(vector<int> &v_, float f_) : v(v_), f(f_) {}

  void display() const { cout << f << " " << v.size() << "\n"; }
};

int main() {
  const vector<int> v = {1, 2, 3, 4};
  S s(v, 1.1);
  s.display();
  return 0;
}
