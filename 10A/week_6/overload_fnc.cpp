// A bunch of overloaded functions to think about resolving function calls

#include "overload_fnc.hpp"

using namespace std;
// first lets say we want to make a function that will do element-wise computation of squaring
// so if we give it a vector v it will square each element in the vector

void sq(vector<double>& v) {
    // loop through the vector and square each element
    for (int i = 0, N=v.size(); i < N; i++) {
         v.at(i) = v.at(i)*v.at(i);
    }
}

void sq(vector<int>& v) {
    // loop through the vector and square each element
    for (int i = 0, N=v.size(); i < N; i++) {
         v.at(i) = v.at(i)*v.at(i);
    }
}

void print(vector<double>& v) {
    for (int i=0, N=v.size(); i < N; i++) {
         cout << v.at(i) << " ";
    }
    cout << "\n";
}

void print(vector<int>& v) {
    for (int i=0, N=v.size(); i < N; i++) {
         cout << v.at(i) << " ";
    }
    cout << "\n";
}

void f(int a, double b) {
    cout << "This is the first function" << "\n";
}

void f_ref(int& a, double& b) {
    cout << "This is the first function with references" << "\n";
}

void g(int a, double b) {
    cout << "This is the first g" << "\n";
}

void g(int a, int b) {
    cout << "This is the second g" << "\n";
}
