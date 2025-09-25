// provide a function defintion for the following docstring

#include <iostream>
#include <vector>
using namespace std;
/**
Receives a vector of ints.
Prints the numbers not divisible by 4
in the same order that they appear in the original vector.
Returns a vector containing the numbers that are divisible by 4.
Again, they appear in the same order as in the original vector.
@param v : the input vector.
@return a subvector of v consisting of the numbers divisible by 4.
*/
vector<int> divisibleBy4(const vector<int>& v) {
    vector<int> out;
    for(int i=0, N=v.size(); i < N; i++) {
        if (v[i] % 4 == 0) {
            out.push_back(v[i]);
        } else {
            cout << v[i] << " ";
        }
    }
    cout << "\n";
    return out;
}

// For clarification, the code
int main() {
    const vector<int> v = {2,4,6,8,12,16,22,24,26};
    const vector<int> w = divisibleBy4(v);
    cout << w.size() << endl;
    cout << w[0] << " " << w[1] << " " << w[2] << " " << w[3] << " " << w
    [4] << endl;
    return 0;
}

/* should print
2 6 22 26
5
4 8 12 16 24 */
