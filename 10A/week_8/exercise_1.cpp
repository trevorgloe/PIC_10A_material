// what is the output of the following?

#include <iostream>
using namespace std;
struct Rectangle {
    double len1;
    double len2;
    void double_side_lengths() {
        len1 *= 2;
        len2 *= 2;
    }
    double area() const { return len1 * len2 ; }
    double perimeter() const { return 2 * ( len1 + len2 ); }
};

int main () {
    Rectangle rec;
    rec.len1 = 3;
    rec.len2 = 5;
    rec.double_side_lengths();
    cout << rec.perimeter() << endl;
    return 0;
}
