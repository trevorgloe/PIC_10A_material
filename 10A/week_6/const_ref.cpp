#include<iostream>

using namespace std;

bool first_letter_cap1(string s) {
    return ((s.at(0) > 65) && (s.at(0) < 91));
}

bool first_letter_cap2(string& s) {
    return ((s.at(0) > 65) && (s.at(0) < 91));
}

bool first_letter_cap3(const string& s) {
    return ((s.at(0) > 65) && (s.at(0) < 91));
}
int main() {
    // lets say a bit more about passing by reference
    // lets be precise about what happens when we pass by reference vs. by value
    string s = "buger";
    cout << boolalpha << first_letter_cap1(s) << "\n";
    // when we pass s by value, a new stack frame is created, and on that stack frame a string is created. Then the data from s in main is copied to that new string and then we test the first letter
    cout << boolalpha << first_letter_cap2(s) << "\n";
    // when we pass by reference, we just pass the memory address of s and then the function does what it does to s directly
    // this is generally much faster
    cout << boolalpha << first_letter_cap3(s) << "\n";
    // when we pass by const reference, we are also passing just the memory address, but now the function knows that its not supposed to modify s, its just supposed to look at s
    // still much faster because we don't need to make a copy
    return 0;
}
