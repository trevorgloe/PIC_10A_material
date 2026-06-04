#include <iostream>
#include <vector>
// what is the output of the following code?
using namespace std;

struct A {
  vector<int> v;
  size_t n;
};

bool check(A a) { return (a.v.size() == a.n); }

int main() {
  A a;
  a.v = vector<int>(10, 10);
  a.n = a.v.size();
  cout << boolalpha << check(a);
}
