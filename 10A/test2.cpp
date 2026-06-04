#include <iostream>

using namespace std;

int print(int &i) {
  i++;
  cout << i << "\n";
  return 0;
}

int main() {
  // int i = 0;
  // const int &r = i;
  // print(i);
  // int j = print(i);
  // cout << i << "\n";
  // cout << j << "\n";
  int i = 0;
  // int *p = &i;
  int j = 1;
  const int *p1 = &i; // pointer to const
  p1 = &j;
  // *p1 = 10;
  int *const p2 = &i; // const pointer
  char a = 'a';
  return 0;
}
