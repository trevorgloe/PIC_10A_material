// what is the output of the following code

#include <iostream>
using namespace std;

int main() {
    int i = 0;
    int j = 1;
    int k = 2;

    if ( j < k ) {
        int i = j;
        j = k;
        k = i;
    }

    cout << i << ' ' << j << ' ' << k << endl;

    return 0;
}
