#include <iostream>

using namespace std ;

int main () {
     int a = 2;
     int b = 3;
    
     cout << a << "  " << b << endl ;
     a += 4;
     b *= 5;
    
     cout << a << "  " << b << endl ;
     cout << b / a << "  " << b % a << endl ;
     cout << a << "  " << b << endl ;
    
     b %= a ;
     a %= b ;
    
     cout << a << "  " << b << endl ;
    
     return 0;
}

