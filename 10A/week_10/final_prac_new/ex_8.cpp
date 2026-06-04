#include <iostream>
#include <vector>
// what is the error with the following code?

using namespace std;

class Holder {
private:
  vector<int> *p1;
  size_t n;

public:
  Holder(vector<int> &v) : p1(&v), n(v.size()) {};
  Holder(vector<int> *p) : p1(p), n((*p).size()) {};
};

int main() {
  vector<int> v1 = {1, 2, 3, 4};
  const vector<int> v2 = {4, 3, 2, 1};
  Holder h1(v1);
  Holder h2(&v2);
}
