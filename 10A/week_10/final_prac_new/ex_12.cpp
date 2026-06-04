#include <iostream>
#include <string>
// This question concerns member access privledges
// Find the error in the following code
using namespace std;

class Second {
private:
  int n;
  string s;
  void set_n() {
    if (s.size() > 0) {
      n = s[0];
    }
  }
  void set_s(string s_) { s = s_; }

public:
  Second(string s_) : s(s_), n(0) {
    cout << "Creating instance of Second with " << s << "\n";
    set_n();
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
  First(string s1, string s2) : a(), b() {
    cout << "Creating an instance of First!\n";
    a.set_s(s1);
    b.set_s(s2);
    a.set_n();
    b.set_n();
  }
};

int main() {
  First A("Hello", "Hi");
  Second a("Hello again");
  Second b;
  return 0;
}
