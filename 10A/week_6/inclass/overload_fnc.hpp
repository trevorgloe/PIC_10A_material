#ifndef OVERLOAD_FNC_HPP
#define OVERLOAD_FNC_HPP

#include <iostream>
#include <vector>

using namespace std;

// Squares every element of a given vetor
void sq(vector<double>& v);

// Square every element of the given int vector
void sq(vector<int>& v);

// prints all the elements of a vector (doubles)
void print(vector<double>& v);

// prints all the elements of a vector )ints)
void print(vector<int>& v);

// f without reference
void f(int a, double b);

// f with references
void f_ref(int& a, double& b);

void g(int a, double b);
void g(int a, int b);

#endif
