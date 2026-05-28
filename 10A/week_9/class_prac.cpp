#include <iostream>
#include <string>
// what is the output of the following code?

using namespace std;

class P {
  string name;
  int num;
  string group;

public:
  P(string n, int i) : name(n), num(i), group("NA") {};
  void assign_group(string g) { group = g; }
  void print() {
    cout << "Name: " << name << "\n"
         << "num: " << num << "\n"
         << "group: " << group << "\n";
  }
};

int main() {
  P t("Trevor", 1);
  P j("John", 2);
  t.assign_group("Group 1");
  j.print();
  t.print();
}
