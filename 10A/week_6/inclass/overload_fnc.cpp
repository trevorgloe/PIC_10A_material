// functions to help us with overloading

#include "overload_fnc.hpp"

void sq(vector<double>& v) {
    // loop through all the elements and square them
    for (int i = 0, N = v.size(); i < N; i++) {
         v.at(i) = v.at(i) * v.at(i);
    }
}

void sq(vector<int>& v) {
    // loop through all the elements and square them
    for (int i = 0, N = v.size(); i < N; i++) {
         v.at(i) = v.at(i) * v.at(i);
    }
}

void print(vector<double>& v) {
    for (int i = 0, N = v.size(); i < N; i++) {
         cout << v.at(i) << " ";
    }
    cout << "\n";
}

void print(vector<int>& v) {
    for (int i = 0, N = v.size(); i < N; i++) {
         cout << v.at(i) << " ";
    }
    cout << "\n";
}

void f(int a, double b) {
    cout << "This is f without reference" << "\n";
}

void f_ref(int& a, double& b) {
    cout << "This is f with references" << "\n";
}

void g(int a, double b) {
    cout << "This is the first g" << "\n";
}

void g(int a, int b) {
    cout << "This is the second g" << "\n";
}

