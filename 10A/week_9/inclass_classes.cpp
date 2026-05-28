#include <iostream>
#include <string>

using namespace std;

class Person {
private:
  string name;
  int age;
  float height;

public:
  Person(string _name, int _age, float _height)
      : name(_name), age(_age), height(_height) {
    cout << "Created a person\n";
  }
  string get_name() { return name; }
  int height_feet() { return static_cast<int>(height / 12.0); }
};

int main() {
  Person trevor("Trevor", 25, 66);
  cout << trevor.get_name() << "\n";
  return 0;
}
