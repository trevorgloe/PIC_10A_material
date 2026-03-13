#include<iostream>

using namespace std;

class C {
public :
int c ;
explicit C ( int a ) : c ( a ) {}
operator double () { return c ; }
};
// int operator +( C & a , int y ) { return a . c + 2 * y ; }
double operator +( C a , double y ) { return a . c + 3 * y ; }
int main () {
C x (2) ;
x . c = 3;
// cout << x + 1.0 << endl ;
cout << C (3) + 2.0 << endl ;
// cout << 2.0 + C (3) << endl ;
cout << C(1) + 1 << endl ;
}
