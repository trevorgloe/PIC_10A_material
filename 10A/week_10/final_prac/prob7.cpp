// what is the output of the following code?
#include <iostream>
using namespace std;

int main() {
    int i = 4;
    int j = 18;
    int a[] = {2,3,5,7,11,13};
    int* p1 = &i;
    int* p2 = &j;
    ++(*p1); *p2 += *p1;
    cout << i << " " << j << endl;
    p2 = p1;
    *p2 = 8 ;
    cout << *(p1) << " " << i << endl;
    cout << *(p2) << " " << j << endl;
    p1 = a+1;
    cout << *(p1) << " " << *(p2) << endl;
    *p1 = -3;
    *(p1 + 3) = 17;
    *(p1 + 4) = *(p2) + 11;
    cout << *(p1) << " " << *(p2) << endl;
    cout << a[0] << " "
    << a[1] << " "
    << a[2] << " "
    << a[3] << " "
    << a[4] << " "
    << a[5] << endl;
    return 0;
}
