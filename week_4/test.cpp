// test of string constructor

#include <iostream>
#include <string>

using namespace std;

int main() {

    const int n = 5;

    for (int j = 0; j < n-2; j++) {
         string l1(n-j-2, ' ');
         l1.push_back('*');
         cout << l1;
         string l2(2*j+1, ' ');
         l2.push_back('*');
         l2.push_back('\n');
         cout << l2;
    }

    [](){}();

    return 0;
}
