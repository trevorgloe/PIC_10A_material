// what will the output be for the following code with input:
// \n
// 9 8\n
// 7 6543\n 
// 2 1012 345 678 911\n

#include <iostream>
#include <string>

using namespace std;

int main() {
    int i1, i2, i3, i4, i5;
    char c; 
    string s;
    
    cin >> i1;
    cin >> i2;
    getline(cin, s);
    
    cin >> i3;
    cin.ignore();
    
    cin >> c;
    cin >> i4 >> i5;
    
    cout << endl;
    cout << "Line 1: " << i1 << endl;
    cout << "Line 2: " << i2 << endl; // These variables
    cout << "Line 3: " << s << endl; // are printed in
    cout << "Line 4: " << i3 << endl; // the same order
    cout << "Line 5: " << c << endl; // that they are
    cout << "Line 6: " << i4 << endl; // assigned to.
    cout << "Line 7: " << i5 << endl;
    return 0;
}


