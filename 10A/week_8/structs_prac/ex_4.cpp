#include <iostream>
#include <string>`
#include <vector>
// What is wrong with this struct I have defined below?

struct Time {
  int hr;
  int min;
  bool AM;

  void print() { std::cout << hr << ":" << min << "\n"; }
};

void print_24hr(const Time t) {
  if (t.AM) {
    t.print();
  } else {
    std::cout << t.hr + 12 << ":" << t.min << "\n";
  }
}
