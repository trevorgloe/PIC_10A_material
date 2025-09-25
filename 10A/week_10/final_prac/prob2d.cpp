#include <iostream>
using namespace std;

int main(){
    const size_t s = 6;
    int a[s] = {5,4,3};
    const int* e = a;
    e += s;
    for(int* p = a; p!= e; ++p){*p+=4;}
    for(const int* p = a; p != e; ++p){cout << *p << ' ';}
    cout << endl;
    return 0;
}
