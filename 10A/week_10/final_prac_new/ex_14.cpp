#include <iostream>
// What is the output of the following code?
// Recall that int** is type pointer to pointer to int

using namespace std;

class ReRoute {
public:
  int i;
  ReRoute(int i_) : i(i_) {};
  void route(int **p) { *p = &i; }
};

int main() {
  ReRoute R(10);
  int *p = nullptr;
  R.route(&p);
  cout << boolalpha << (p == 0) << "\n";
  cout << (p == &R.i) << "\n";
  return 0;
}
