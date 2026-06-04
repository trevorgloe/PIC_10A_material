#include <iostream>
#include <vector>
// what is the output of the following code?
// Hint: what exactly is the type of vector<char*>?
using namespace std;

int main() {
  vector<char *> v;
  char d1 = 'a';
  char d2 = 'b';
  char d3 = d1;
  char d4 = d2;
  v.push_back(&d1);
  v.push_back(&d2);
  v.push_back(&d3);
  v.push_back(&d4);
  cout << d1 << d2 << d3 << d4 << "\n";
  cout << boolalpha << (v[2] == v[0]) << " " << (v[1] == v[3]) << "\n";
  return 0;
}
