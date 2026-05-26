#include <iostream>
#include <vector>
// what is the output of the following code?
// Keep in mind that, in the initializer list for the struct, I use a
// constructor for vectors

using namespace std;

struct TwoVecs {
  vector<int> I;
  vector<float> F;

  TwoVecs(int i, float f) : I(10, i), F(10, f) {}
};

int main() {
  TwoVecs T(1, 2);

  cout << T.I[1] << "\n";
  cout << T.F[1] << "\n";
  cout << T.I.size() << "\n";
  cout << boolalpha << (T.I.size() == T.F.size()) << "\n";

  return 0;
}
