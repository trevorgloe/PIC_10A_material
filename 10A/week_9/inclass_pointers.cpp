// Lets talk about pointers

#include <iostream>
#include <vector>

using namespace std;

class A {
    int a;
public:
    void mult_two() {
            // this is a pointer to the implicit parameter
           this->a *= 2;     
}
};
// if I did obj.mult_two(), this would be a pointer to 
// &obj
int main() {
    // Think about the memory as a continuous line of slots for data
    int a = 13;
    int* pa = &a;
    cout << "variable a has value " << a << " and is stored at " << pa << "\n";
    // int* pa or int *pa
    //
    // The dereference operator
    cout << "The data at pa is " << *pa << "\n";
    // the output of the derefernce operator is actually a reference (&a)

    // if we dont initialize it points to a random location
    int* p2;
    cout << "before initialization: " << p2 << "\n";
    p2 = nullptr;
    cout << "after initialization: " << p2 << "\n";

    // const pointer vs pointer to const
    int b = 42;
    int* const p3 = &b; // const pointer to int
    const int* p4; // pointer to const int
    p4 = &b;
    const int* const p5 = &b;

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    vector<int>* pv = &v;
    cout << pv << "\n";
    v.push_back(3);
    cout << pv << "\n";

    // pointer arithmetic 
    bool my_bools[10] = {}; // array of false
    my_bools[3] = true;
    bool* boolp = &my_bools[2];
    cout << *boolp << "\n";
    cout << boolp << "\n";
    boolp++;
    cout << *boolp << "\n";
    cout << boolp << "\n";

    // how the addresses on the stack and the heap differ
    vector<int> w;
    w.push_back(1);
    w.push_back(2);
    int* wp = &w[0]; // we know this is on the heap
    double my_double = 1.3;
    double* pmy_double = &my_double;
    cout << "heap variable is at " << wp << "\n";
    cout << "stack variable is at " << pmy_double << "\n";

    int* bad_ptr;
    cout << *bad_ptr << "\n";
    int array[10];
    // cout << array[10] << "\n";
    A thingy;
    A.mult_two();
    return 0;
}
