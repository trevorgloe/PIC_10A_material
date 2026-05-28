#include <iostream>
#include <string>
// what is the error with the following code?

using namespace std;

struct D {
  string name;
  int num;

  D(string &n) : name(n), num(0) {}
  D(string n, int i) : name(n), num(i) {}
  D() : name(), num(0) {}
};

int f(int& i) {

}
int main() {
  D d1;
  D d2("Trevor", 1);
  D d3(name);

  return 0;
}
