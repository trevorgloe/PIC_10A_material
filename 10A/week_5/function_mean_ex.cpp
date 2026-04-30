#include <iostream>
/*
Lets make a function that will take in 2 floats and 2 ints, i and j. It will find the mean of i copies of the first float and j copies of the second float.
*/

float mean_copies(float x, int i, float y, int j) {
    return (x*i + y*j) / (i + j);
}
int main() {
    int i = 3;
    int j = 20;
    float x = 1.21;
    float y = 3.41;
    std::cout << mean_copies(x, i, y, j) << "\n";

    return 0;
}
