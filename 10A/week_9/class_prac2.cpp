#include <iostream>
#include <vector>
// what is the error in the following code?

class Inside {
  int a;
  int b;

public:
  Inside(int i, int j) : a(i), b(j) {};
};

class Outside {
private:
  Inside i1;
  Inside i2;

public:
  Outside(int i, int j) : i1(i, i), i2(j, j) {};
  int sum() {
    int sum1 = i1.a + i2.b;
    int sum2 = i2.a + i2.b;
    return sum1 + sum2;
  }
};

using namespace std;

int main() {
  Outside O(1, 2);
  cout << O.sum() << "\n";

  return 0;
}
