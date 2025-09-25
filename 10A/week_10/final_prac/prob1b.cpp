#include <iostream>
#include <string>

using namespace std;

int main() {
    int i = 123;
    int j = 4;
    int k = 567;
    i = ++j;
    k = j++;
    cout << i << " " << j << " " << k << endl;
    return 0;
}
