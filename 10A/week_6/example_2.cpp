// find all the errors in the following code (there are at least 2, depending on how you count them)

#include <iostream>
#include <vector>

using namespace std;

void print_first(const vector<double>& v) {
    cout << v.at(0) << "\n";
}

int main() {
    const vector<double> w = {1.0, 2.2, 'd', 3};
    
    print_first(w);
    return 0;
}
