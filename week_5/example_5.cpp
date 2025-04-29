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

/**
 @brief clamps input value between cla and -cla

 This pure function will do nothing if the input is between cla and -cla and return cla or -cla if val is outisde the range (-cla, cla)
 @param val : the input
 @param cla : the value that the input will be clamped between (assumed positive)
 @return : the clamped value
*/
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
