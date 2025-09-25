#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Uoq cop phes";
    for (size_t i=0, N=s.length(); i<N; i=i+2) {
    s[i] += 4;
    }
    cout << s << endl;
    return 0;
}
