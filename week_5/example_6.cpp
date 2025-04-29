// what is the output of the following code?

#include <iostream>
using namespace std;

int f (int i) {
    cout << " f " ;
    return i * i ;
}

int main () {
    f(2);
    int j = f(3);
    int k = f(4);
    cout << k << ' ';
    cout << f(5) << endl ;
    return 0;
}
