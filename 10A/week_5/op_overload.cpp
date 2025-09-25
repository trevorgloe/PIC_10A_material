// overload the = operator

#include <iostream>

using namespace std;

class TwoNums {
    private:
        double* num3;

public:
    TwoNums(double n3) { 
        num3 = new double;
        *num3 = n3;
    }

    void print() {
        cout << *num3 << "\n";
    }

    void up_one() {
        *num3 = *num3 + 1;    
    }
};

int main() {
    // create an instance of this class
    TwoNums obj = TwoNums(3.0);
    obj.print();

    TwoNums obj2 = obj;
    obj2.print();

    obj.up_one();
    obj.print();
    obj2.print();

    return 0;
}
