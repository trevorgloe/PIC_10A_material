// what is the output of the following code?

#include <iostream>
#include <vector>

using namespace std;

float avg(vector<int>& v) {
    cout << "This is the function for integers" << "\n"; 
    int tot = 0.0;
    for (int i=0, N=v.size(); i < N; i++) {
         tot += v.at(i);
    }
    return static_cast<float>(tot / v.size());
}

float avg(vector<float>& v) {
    cout << "This is the function for floats" << "\n";
    float tot = 0.0;
    for (int i=0, N=v.size(); i < N; i++) {
         tot += v.at(i);
    }
    return tot / v.size();
}

int main() {
    vector<int> v = {1,2,3,4};
    vector<float> w = {1.2, 1.3, 1.4, 1.5};
    cout << avg(v) << "\n";
    cout << avg(w) << "\n";
}
