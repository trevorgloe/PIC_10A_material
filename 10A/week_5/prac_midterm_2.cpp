// practice midterm 1
// question 2
// what is the output?

#include <iostream>
#include <string>

using namespace std;

int main(){
    cout << "Enter the four commented lines of code:" << endl;
    /*
    123 45 6 78 9 0
    123
    456
    789 123 456 789
    */
    char c1, c2;
    string s1, s2;
    int i1, i2, i3, i4, i5;
    cin.ignore(); cin >> i1;
    cin.ignore(); cin >> i2;
    cin.ignore(); getline(cin, s1);
    cin >> i3; getline(cin, s2);
    c1 = cin.get(); c2 = cin.peek(); cin >> i4 >> i5;
    cout << "Line 1: " << i1 << endl;
    cout << "Line 2: " << i2 << endl;
    cout << "Line 3: " << s1 << endl; // These variables
    cout << "Line 4: " << i3 << endl; // are printed out
    cout << "Line 5: " << s2 << endl; // in the same order
    cout << "Line 6: " << c1 << endl; // that they are
    cout << "Line 7: " << c2 << endl; // assigned to
    cout << "Line 8: " << i4 << endl;
    cout << "Line 9: " << i5 << endl;
    return 0;
}
