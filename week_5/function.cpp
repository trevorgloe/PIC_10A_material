// How functions work

#include <iostream>

using namespace std;

/** 
This function takes the max of 2 ints

@param : a one integer input
@param : b another int input
@return : the maximum
*/
int my_max(int a, int b) {
    // take the maximum of 2 ints
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    // call max function
    int a = 2;
    int b = 10;
    int c = my_max(a, b);
    cout << c << "\n";
    {
        int j = 1;
        j += a;
    }
    return 0;
}
