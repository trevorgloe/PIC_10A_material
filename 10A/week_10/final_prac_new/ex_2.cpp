#include <iostream>
#include <string>

// what is the output of the followinng code?

using namespace std;

int main() {
  string s = "Hamburger, hamburger, hamburger, cheeseburger";

  size_t i = s.find('u');
  string s2 = s.substr(i, 5);
  size_t j = s.rfind("ha");
  string s3 = s.substr(j, 3);

  cout << s2 << s3 << "\n";
}
