// using pointers vs references in functions
// which of these two versions of the function may be more desirable for developers?
// fun fact: I was asked this question in an interview once :)
#include <iostream>
using namespace std;
class Mat {
    public:
        int a;
        int b;
        int c;
        int d;
};
// get second element using reference
int elem(Mat& M) {
    return M.b;
}
// get second element using pointer
int elem(Mat* M) {
    return M->b; // shorthand for (*M).b
}
int main() {
    Mat A;
    A.b = 10;
    A.a = 1;
    A.c = 0;
    A.d = 100;
    Mat* pA = &A;
    cout << elem(A) << "\n"; // uses the reference overload
    cout << elem(pA) << "\n"; // uses the pointer overload
    return 0;
}
