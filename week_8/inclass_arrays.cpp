// C-style arrays

#include <iostream>
#include <cmath>

using namespace std;

void print(double arr[], const int arr_size) {
    for (int i = 0; i < arr_size; i++) {
         cout << arr[i] << "\n";
    }
}

void edit(double arr[]) {
    arr[0]++;
}

int main() {
    // Arrays are another way to hold objects

    // to create an array we need: 
    // 1. size
    // 2. data type
    const size_t my_size = 10;
    double list[my_size];

    // we can fill it sorta the same as vectors
    for (int i=0; i < my_size; i++) {
        list[i] = sqrt(i);
    }
    print(list, my_size);

    cout << list[0] << "\n";
    edit(list);
    cout << list[0] << "\n";

    // something else weird
    double list2[my_size] = {1};
    double* a; // bascially a reference
    a = list2;
    cout << *a << "\n";
    return 0;
}
