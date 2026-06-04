#include <iostream>
#include <vector>
// what is wrong with the following function? There are certain situations which
// will make the function error? Describe them

using namespace std;

bool first_elem_prime(vector<int> &v) {
  int test = v[0];
  for (int i = 2; i < test; ++i) {
    if (test % i == 0) {
      return false;
    }
  }
  return true;
}
