#include <iostream>
#include <string>
// This question concerns the use of constructors
// What is the output of the following code?
using namespace std;

class Second {
private:
  int n;
  string s;

public:
  Second(string s_) : s(s_), n(0) {
    cout << "Creating instance of Second with " << s << "\n";
    if (s.size() > 0) {
      n = s[0];
    }
  }
  Second() : s(), n(0) {
    cout << "Creating default instance of Second" << "\n";
  }
};

class First {
private:
  Second a;
  Second b;

public:
  First(string s1, string s2) : a(s1), b(s2) {
    cout << "Creating an instance of First!\n";
  }
};

int main() {
  First A("Hello", "Hi");
  Second a("Hello again");
  Second b;
  return 0;
}
