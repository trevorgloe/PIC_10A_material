// whats wrong with the following code?

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<double> w;

    const int n = 10;

    // fill the vector with equal spaced numbers from 0 to 1
    for (int i = 1; i < n; i++) {
        w.push_back(i / 10);
    }

    // print out all the numbers
    for (int j = 0, N=w.size(); j < N; j++) {
        cout << w.at(j) << "\n";
    }

    return 0;
}
