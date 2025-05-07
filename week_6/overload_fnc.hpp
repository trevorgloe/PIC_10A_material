// header file for our overloaded functions

#ifndef OVERLOAD_FNC_HPP
#define OVERLOAD_FNC_HPP

#include <iostream>
#include <vector>

using namespace std;

/**
Squares every element of a given vector

@param v : input vector (of doubles)
*/
void sq(vector<double>& v);

/**
Squares every element of a given vector

@param v : input vector (of ints)
*/
void sq(vector<int>& v);

/**
Prints out all the elements of the vector

@param v : vector of doubles
*/
void print(vector<double>& v);

/**
Prints out all the elements of the vector

@param v : vector of ints 
*/
void print(vector<int>& v);

/** 
Just a test function to talk about casting

@param a : an int
@param b : a double
*/
void f(int a, double b);

/**
Basically the same as f but with references

@param a : a reference to an int
@param b : a reference to a double
*/
void f_ref(int& a, double& b);

void g(int a, double b);
void g(int a, int b);

#endif
