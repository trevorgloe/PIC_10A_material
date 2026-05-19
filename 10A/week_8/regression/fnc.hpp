#ifndef FNC_HPP
#define FNC_HPP

#include<vector>
#include<string>
#include<stdexcept>
#include<fstream>

using namespace std;
/* 
Read data from the file

Read the data from the file specified in the string, into 2 vectors: one vector of x's and one vector of y's
@param - s, the filename as a string
@param - x, the vector for holding all the x values
@param - y, the vector for holding all the y values
*/
void read_into_vecs(string s, vector<float>& x, vector<float>& y);

/*
Create x matrix

Create the matrix (vector of vectors) for a given kind of linear regression. The matrix will be mx(k+1) where k is the order of the regression (linear regression is order 1 for example)
@param - x, the vector of data
@param - k, the int specifying the order
@returns - A, a vector of vectors, where each inner vector is a row (row-major, kinda)
*/
vector<vector<float>> create_x_mat(vector<float>& x, int k);

/*
Compute regression parameters

compute the parameters for the order-k regression, by finding the least squares solution to A*m = y
@param - x, the vector of the input data
@param - y, the output data, which are trying to regress to
@param - k, an int reprenseting the order of the regression (k=1 is linear regression)
@returns - m, a vector of the regression parameters
*/
vector<float> compute_regression(vector<float>& x, vector<float>& y, int k);

/*
Matrix-vector multiplication

computes A*x where x is a vector and A is a matrix (vector of vectors)
@params - A, vector of vectors
@params - x, vector of same dimension as the columns of A
*/
vector<float> mat_vec(vector<vector<float>>& A, vector<float>& x);

/*
vector-vector inner product

computes the inner product between 2 vectors, u and v
@param - v, vector 1
@param - u, vector 2
@returns - inner product of u and v
*/
float inner_prod(vector<float>& v, vector<float>& u);

/*
Compute the matrix A^T A from the data

creates the mxm matrix A^T*A from the data, used for solving the normal equations to get the least-squares solution
@param - x, data in a vector
@param - k, integer specifying the order of the regression
@returns - AtA - vector of vector
*/
vector<vector<float>> compute_AtA(vector<float>& x, int k);

#endif
