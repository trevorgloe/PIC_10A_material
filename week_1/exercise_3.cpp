// predict the output of the following code
#include <iostream> 
#include <string> 

using namespace std; 

int main() {
    string s = "Hello world!"; 
    char c = s.at(6); 

    cout << ++c << endl; 
    cout << s.at(6)++ << endl; 
    cout << c << endl; 
    cout << s << endl; 

    return 0; 
} 

