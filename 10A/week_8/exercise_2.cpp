// what is the output of the following code?
// Be care of the pass-by-references happening

#include <iostream>
#include <vector>

using namespace std;

void edit(vector<int>& v, int& a) {
    cout << a << "\n";
    cout << v.capacity() << "\n";
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    cout << v.size() << "\n";
    cout << v.capacity() << "\n";
    cout << a << "\n";
}

int main() {
    vector<int> v = {1,2,5};
    edit(v, v[2]);
    
    return 0;
}
