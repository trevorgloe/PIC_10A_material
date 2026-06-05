#include <iostream>
#include <string>
// what is the output of the following code?

using namespace std;
class Name {
private:
  string first;
  string last;
  string title;

public:
  Name(string f, string l) : first(f), last(l), title() {};
  void print() const {
    if (title.size() > 0) {
      cout << title << " " << first << " " << last;
    } else {
      cout << first << " " << last;
    }
  }
  void promote(string t) {
    print();
    cout << " has recieved the title of " << t << "\n";
    title = t;
  }
};
int main() {
  Name t("Trevor", "Loe");
  Name j("Joe", "Bob");
  j.promote("Sir");
  t.print();
  cout << "\n";
  j.print();
}
