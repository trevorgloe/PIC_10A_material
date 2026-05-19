#include<vector>
#include<iostream>

using namespace std;

// int f(vector<int>& v) {
//     v[0]++;
// }

int main() {
    int a = 1;
    // vector<int> v(100, 1);
    vector<int> v = {1,2,3,4,5,6};

    for (int x : v) {
        cout << x << "\n";
        if (x==4) {
            break;
        }
    }

    return 0;
}
