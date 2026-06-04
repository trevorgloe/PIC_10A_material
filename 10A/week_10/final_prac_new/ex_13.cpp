#include <iostream>
#include <vector>
// What is wrong with the following class?
// Hint: can you think of a situation in which using this class could cause an
// error?
using namespace std;

class Int_Holder {
private:
  int *p;
  int mult;

public:
  Int_Holder() : p(nullptr), mult(0) {};
  void init_p(int &i) { p = &i; }
  void init_mult(int m) { mult = m; }
  int get_mult() { return (*p) * mult; }
};
