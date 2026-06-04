#include <iostream>
// what is the output of the following code. This one is kind of confusing so be
// careful
using namespace std;

int main() {
  int x = 0;
  int y = 1;
  {
    int &r1 = x;
    int x = 42;
    cout << x << " " << r1 << "\n";
    x *= 2;
  }
  x -= y;
  {
    int y = 100;
    x += y;
  }
  cout << x << " " << y << "\n";
}
