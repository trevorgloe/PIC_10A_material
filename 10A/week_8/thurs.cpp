#include <iostream>
#include <string>

using namespace std;

struct Source {
  string author_first;
  string author_last;
  int year;
  string title;
  string journal;
  int month;
  string apa_cite(int i) {
    string cite = "(" + author_last;
    cite.push_back(' ');
    cite = cite + to_string(year);
    cite.push_back(')');
    return cite;
  }
};

bool newer(const Source &s1, const Source &s2) {
  if (s1.year > s2.year) {
    return true;
  } else if (s1.year < s2.year) {
    return false;
  } else {
    if (s1.month > s2.month) {
      return true;
    } else {
      return false;
    }
  }
}
int main() {
  Source s1;
  s1.title = "title";
  s1.year = 2000;
  s1.month = 1;
  Source s2;
  s2.year = 2002;
  s2.month = 2;
  s2.author_first = "Trevor";
  s2.author_last = "Loe";
  cout << newer(s1, s2) << "\n";
  cout << s2.apa_cite(1) << "\n";
  return 0;
}
