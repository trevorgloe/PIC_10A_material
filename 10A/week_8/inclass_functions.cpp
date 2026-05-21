#include "inclass_functions.hpp"

void pop_two(std::vector<int> &v) {
  v.pop_back();
  v.pop_back();
}

int first_1(std::vector<int> v) {
  for (int i = 0; i < v.size(); ++i) {
    if (v[i] == 1) {
      return i;
    }
  }
  return -1;
}
