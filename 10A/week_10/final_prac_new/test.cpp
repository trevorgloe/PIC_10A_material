#include <iostream>

using namespace std;

void f(int &i) { return; }

void f(int *i) {
  if (i != 0) {

    return;
  }
  int main() {
    int i = 1;
    int *p = &i;
    int **p2 = &p;
    cout << p << "\n";
    cout << p2 << "\n";

    // const int *cp = &i;
    // int *const cp2 = &i;
    // *cp = 2;
    // *cp2 = 2; // allowed
    //
    // int j = 0;
    // cp2 = &j;
    p = nullptr;
    f(p);
  }
