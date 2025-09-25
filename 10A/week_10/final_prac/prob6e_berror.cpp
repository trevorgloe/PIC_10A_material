#include <iostream>
#include <string>

using namespace std;

class E {
public:
    E() {}
    void Efunc() {
        cout << "You're at the trickier part of the exam now." << endl;
        cout << "Don't panic if you find it difficult. Think slowly." << endl;
    }
};

class F {
public:
    F(int _i): i(_i) {}
    int Ffunc(int j) { e.Efunc(i); return j; }
private:
    int i;
    E e;
};

int main() {
    return 0;
}
