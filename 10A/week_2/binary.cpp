// binary representations
//
#include <iostream>
#include <bitset>
#include <iomanip>

using namespace std;

int main() {
    // get the binary representation of a numer
    int a = 122;
    cout << bitset<8>(a) << "\n"; 
    cout << hex << a << "\n";
    return 0;
}
