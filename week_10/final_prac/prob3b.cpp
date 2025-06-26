/* 
uppose that you are defining a function which has a parameter x of type T.
Explain how to decide between passing x. . .
• by value: T x;
• by const value: const T x;
• by reference: T& x;
• by reference to const: const T& x.
*/

#include <iostream>

using namespace std;

void by_val(int a) { cout << a << "\n"; }
void by_const_val(const int a) { cout << a << "\n"; }
void by_ref(int& a) { cout << a << "\n"; }
void by_reftoconst(const int& a) { cout << a << "\n"; }

int main() {

    return 0;
}
