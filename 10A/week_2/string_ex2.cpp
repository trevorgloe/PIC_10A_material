#include<iostream>
#include<string>

/*
    Lets make a useful code that compute the average and standard deviation of 4 numbers supplied by the user

    NOTE: the std::stof(s) function will take in a string and give you a float
    So if I had string s = "1.32", then float x = std::stof(s), would make a float x with the value of 1.32

    For this program, the user should be asked to supply 4 floats, separated by spaces. The program then computes the average and standard deviation of the numbers
    The program then prints out these values
*/
using namespace std;

int main() {
    // Part 1: get 4 floats from the user and store them in 4 float variables
    string str1, str2, str3, str4;
    cin >> str1 >> str2 >> str3 >> str4;
    float num1 = stof(str1);
    float num2 = stof(str2);
    float num3 = stof(str3);
    float num4 = stof(str4);

    // Part 2: Compute the mean and standard deviation of the 4 numbers
    float mean = (num1 + num2 + num3 + num4)/4.0;
    cout << "Mean of the provided numbers is " << mean << "\n";
    return 0;
}
