// what is the output of the following code?
#include <iostream>
using namespace std;

class A {
public :
    A () { cout << " A :: A () " << endl ; }
    void f () { g (); cout << " A :: f () " << endl ; }
private :
    void g () { cout << " A :: g () " << endl ; }
};

class B {
public :
    B () : a () { cout << " B :: B () " << endl ; }
    void g () { a . f (); cout << " B :: g () " << endl ; }
private :
    void f () { g (); cout << " B :: f () " << endl ; }
    A a ;
};

int main () {
    B b; 
    b.g();
    return 0;
}
