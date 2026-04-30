#include<iostream>

using namespace std;

int main() {
    // double a, b, c;
    // // cin >> a >> b >> c;
    // // cout << a << " " << b << " " << c << "\n";
    // int _data_value = 1;
    // cout << _data_value << "\n";
    const int x = 10;
    const int y = 2;
    {
        int x = -21;
        cout << x << ", ";
        x /= y;
    }
    cout << x << "\n";
}
