// Predict the output of the following code
// note that it is written in a misleading way...

#include <iostream>
#include <string>
using namespace std;

int main () {
    string s = "AAARGH!!!";
 
    if (s.find("???")) { cout << 1 << endl; }
    if (s.find("RGH")) { cout << 2 << endl; }
    if (s.find("AAA")) { cout << 3 << endl; }

    return 0;
 }
