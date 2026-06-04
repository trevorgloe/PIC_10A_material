#include <iostream>
#include <string>
#include <vector>
/*
Create a struct for a student. It should have the student's name, ID number (an
int), a list of their classes, and their grades in each class (vector of chars).
For this vector just assume their grade is A,B,C,D, or F (not + or -)

Create 3 constructors for the student. The first will take just the students
name and ID. The second will take their name, ID, and classes currently taking.
For this constructor you need to initilize the grades to all be 'N'. The third
constructor takes in the name, ID, classes, and grades.

Create a function, gpa() which outputs the student's GPA on a 4-point scale.
*/

using namespace std;

class Student {
private:
  string name;
  int ID;
  vector<string> classes;
  vector<char> grades;
  int one_gpa(size_t i) {
    char grade = grades[i];
    switch (grade) {
    case 'A':
      return 4;
      break;
    case 'B':
      return 3;
      break;
    case 'C':
      return 2;
      break;
    case 'D':
      return 1;
      break;
    case 'F':
      return 0;
      break;
    }
    return -1;
  }

public:
  Student(string n, int i) : name(n), ID(i) {};
  Student(string n, int i, vector<string> c, vector<char> g)
      : name(n), ID(i), classes(c), grades(g) {};
  Student(string n, int i, vector<string> c)
      : name(n), ID(i), classes(c), grades(vector<char>(c.size(), 'N')) {};

  float gpa() {
    float tot = 0.0;
    for (int i = 0; i < grades.size(); ++i) {
      tot += one_gpa(i);
    }
    return tot / grades.size();
  }
};
int main() {
  // this is what it should look like using the struct
  Student Trevor("Trevor", 1);
  vector<string> classes = {"Calc 1", "Phil 101", "History"};
  vector<char> grades = {'A', 'A', 'B'};
  Student Trevor2("Trevor", 1, classes, grades);
  cout << Trevor2.gpa() << "\n";
  return 0;
}
