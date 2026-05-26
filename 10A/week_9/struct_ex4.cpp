#include <iostream>
#include <string>
#include <vector>
/*
Create a struct for a student. It should have the student's name, ID number (an
int), a list of their classes, and their grades in each class (vector of chars).
For this vector just assume their grade is A,B,C,D, or F (not + or -)

Create 3 constructors for the student. The first will take just the students
name and ID. The second will take their name, ID, and classes currently taking.
For this constructor you need to initilize the grades to all be 'NA'. The third
constructor takes in the name, ID, classes, and grades.

Create a function, gpa() which outputs the student's GPA on a 4-point scale.
*/

using namespace std;

int main() {
  // this is what it should look like using the struct
  Student Trevor("Trevor", 1);
  vector<string> classes = {"Calc 1", "Phil 101", "History"};
  vector<char> grades = {'C', 'A', 'B'};
  Student Trevor2("Trevor", 1, classes, grades);
  cout << Trevor2.gpa() << "\n";
  return 0;
}
