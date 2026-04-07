#include<iostream>

using namespace std;

int main() {
    int a = 1; // declaring, defining, initializing (assigning)
    int b;
    cout << b << "\n";

    // const variable
    const float PI = 3.1415927;
    // PI += 1;

    // chars
    char p = 'p';
    cout << p << "\n";
    p++;
    cout << p << "\n";

    // bools
    bool t = true;
    cout << "size of bool is " << sizeof(t) << "\n"; // weird
    bool s = (2 == 2);
    cout << boolalpha << s << "\n";

    // casting
    float radius = 1.1;
    int int_rad = static_cast<int>(radius);
    cout << int_rad << "\n";

    int j = 2;
    bool b2 = static_cast<bool>(j);
    cout << b2 << "\n";

    char letter = 89; // implicit casting
    int thing = 1; // bad name
    bool checkForEquality = false; // camel case
    bool check_for_equality = false; // snake case
    return 0;
}
