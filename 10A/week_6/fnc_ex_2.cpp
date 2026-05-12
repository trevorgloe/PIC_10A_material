// function example
// what is the output?

#include <iostream>
#include <string>

int clamp(int val, int cla);

int main() {
    int a = 1;
    int b = clamp(a, 10); 

    std::cout << b << "\n";
    return 0;
}

// describe what the function does in words
int clamp(int val, int cla) {
    // use two if statements
    if (val > cla) {
        return cla;
    } else if (val < -cla) {
        return -cla;
    } else {
        return val;
    }
}
