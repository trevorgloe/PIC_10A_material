// A bit of extra stuff on bools
//
#include <iostream>

using namespace std;

int main() {
    // we can define a bool using a condition
    int a = 3;
    bool a_is_three = (a==3);
    cout << "a is 3? " << a_is_three << "\n";

    // combining bools
    bool t = true;
    bool f = false;
    bool s = true;
    cout << t*s << "\n";
    cout << t*f << "\n";
    cout << t+f << "\n";
    cout << t+s << "\n";
    bool t_or_s = t+s;
    cout << t_or_s << "\n";

    // WARNING: For this class, (for now) use the + and * operators
    //
    // typically this is done using && for and and || or "or"
    bool t_and_s = t&&s;
    cout << t_and_s << "\n";

    // examples: predict the output
    int b = 42;
    bool e1 = (b > 42) * (a > 42);
    cout << e1 << "\n";

    // heres a classic
    bool e2 = ( ( b % 2 == 0) + (a & 2 == 0)) * (a + b < 50);
    cout << e2 << "\n";

    // here is a particularly infuriating example
    bool new_t_s = t+s;
    cout << (t+s == new_t_s) << "\n";
    return 0;
}

