// Lets talk about pointers

#include <iostream>
#include <vector>

using namespace std;

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
    return 0;
}
