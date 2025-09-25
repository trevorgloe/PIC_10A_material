// what is the output of the following code?
// The char for ascii code 79 is O

#include <iostream>
#include <string>

using namespace std;
class A {
    int a;
    float b;
    string name;

    public:
        A(int _a, float _b, string _name) : a(_a), b(_b), name(_name) {};
        void change_name() {
            name.push_back(a);
        };
        float two_b() {
            return b*2;
        };
        void print_name() {
            cout << name << "\n";
        } 

};    
int main() {
    A my_A(79, 2.34, "Trevor");
    my_A.change_name();
    cout << my_A.two_b() << "\n";
    my_A.print_name();
    return 0;
}

