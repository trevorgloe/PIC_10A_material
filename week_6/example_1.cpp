// what is the output of the following code?

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> v = { -2 , 4 , 6 , 8 };
    v.pop_back ();
    v.push_back(3);
    v.push_back(9);
    v.push_back(3);
    v.push_back(9);
    v.resize(5);
    v.resize(8, 11);
    v.resize(10);
    for (size_t i = 0 , N = v.size(); i < N ; ++i) {
        cout << v [i] << ' ';
    }
    cout << boolalpha << v.empty() << endl ;
    return 0;
}
