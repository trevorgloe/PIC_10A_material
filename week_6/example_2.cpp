// find all the errors in the following code (there are at least 3, depending on how you count them)

#include <iostream>
#include <vector>

using namespace std;

void print_first(const vector<int>& v) {
    cout << v.at(0) << "\n";
}

int main() {
    vector<double> w = {1.0, 2.2, 3};
    
    print_first(w);
    return 0;
}
