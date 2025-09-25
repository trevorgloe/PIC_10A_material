// what is the output?

# include <iostream>
using namespace std;

void f(int i, int j) {
    int tmp = i;
    i = j;
    j = tmp;
    cout << i << ' ' << j << endl;
}

int main() {
    int i = 0;
    int j = 1;
    cout << i << ' ' << j << endl;
    f (i, j);
    cout << i << ' ' << j << endl;
    return 0;
}
