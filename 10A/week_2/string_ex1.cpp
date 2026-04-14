#include<iostream>
#include<string>
/*
    Predict the output of the following code
*/
using namespace std;

int main() {
    string alphabet = "abcdefgh";
    alphabet.at(3)++;
    alphabet[2]--;
    alphabet.pop_back();
    cout << alphabet << "\n";

    return 0;
}
