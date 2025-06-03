// Some final things to talk about: default values and recursion

#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

class Matrix {
    private:
        double a11;
        double a12;
        double a21;
        double a22;

    public:
        Matrix(double _a11, double _a12, double _a21, double _a22) : a11(_a11), a12(_a12), a21(_a21), a22(_a22) {};
        Matrix() : a11(NAN), a12(NAN), a21(NAN), a22(NAN) {};
        
        // checks if the matrix has been default-constructed
        bool isNaN() {
            // returns true if matrix is full of NaNs
            if (isnan(a11) && isnan(a12) && isnan(a21) && isnan(a22)) {
                return true;
            } else {
                return false;
            }
        }
        
        // Multiplies the matrix A on the left
        Matrix mat_mult(Matrix& A) {
            vector<double> col1 = {a11, a21};
            vector<double> col2 = {a12, a22};
            vector<double> newcol1 = A.mult(col1);
            vector<double> newcol2 = A.mult(col2);
            Matrix out(newcol1[0], newcol2[0], newcol1[1], newcol2[1]);
            return out;
        }
        
        // prints the matrix out
        void print() {
            cout << a11 << " " << a12 << "\n";
            cout << a21 << " " << a22 << "\n";
        }
        
        // multiplies a vector on the right
        vector<double> mult(const vector<double>& v) {
            vector<double> out = {0.0, 0.0};
            out[0] = a11 * v[0] + a12 * v[1];
            out[1] = a21 * v[0] + a22 * v[1];
            return out;
        }

    Matrix power(int n, Matrix base = Matrix()) {
        // if n=1, return matrix
        if (n==1) {
            if (base.isNaN()) {
                return *this;
            } else {
                return base;
            }
        }
        if (base.isNaN()) {
            // set base to be the implicit parameter
            base = Matrix(a11, a12, a21, a22);
        }
        cout << "n = " << n << "\n";
        Matrix new_mat = mat_mult(base); // A.mat_mult(..)
        new_mat.print();
        return power(n-1, new_mat);
    }
};

int main() {
    // Lets do something rather complicated with this matrix class:
    // make a function to raise the matrix to a specified power
    // We will do this with recursion
    
    // first lets test out our class
    Matrix A(0.4, 2, 1, 1);
    Matrix B(2,1,3,-1);
    A.print();

    Matrix C = B.mat_mult(A);
    C.print();

    Matrix Nans;
    cout << Nans.isNaN() << "\n";

    Matrix Asqr = A.power(8);
    Asqr.print();
    return 0;
}
