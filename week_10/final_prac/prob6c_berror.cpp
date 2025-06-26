#include <iostream>
#include <string>

using namespace std;

class D{
    int l;
    D(int j): l(j) {}
    void print_l(){
        cout << l << endl;
    }
};

int main() {
    int k = 2;
    D new_d(k);
    return 0;
}
