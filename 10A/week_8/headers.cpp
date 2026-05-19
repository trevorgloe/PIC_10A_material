#include<iostream>
#include<vector>
#include "functions.hpp"

using namespace std;

int main() {
    vector<int> v = {4,3,2,1,5,6,7,8};
    pop_two(v);
    cout << first_1(v) << "\n";
    cout << v.size() << "\n";
    return 0;
}
