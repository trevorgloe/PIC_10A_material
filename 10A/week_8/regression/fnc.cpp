#include "fnc.hpp"
#include <cmath>
#include <iostream>

using namespace std;

float inner_prod(vector<float> &v, vector<float> &u) {
  float tot = 0.0;
  if (v.size() != u.size()) {
    throw invalid_argument("vectors are not the same size\n");
  }
  for (int i = 0; i < v.size(); ++i) {
    tot += v[i] * u[i];
  }
  return tot;
}

vector<vector<float>> create_x_mat(vector<float> &x, int k) {
  vector<vector<float>> A;
  for (int i = 0; i < x.size(); ++i) {
    vector<float> row;
    for (int j = 0; j <= k; ++j) {
      row.push_back(pow(x[i], j));
    }
    A.push_back(row);
  }
  return A;
}

vector<vector<float>> compute_AtA(vector<float> &x, int k) {
  vector<vector<float>> A = create_x_mat(x, k);
  vector<vector<float>> AtA;
  for (int i = 0; i <= k; ++i) {
    vector<float> row;
    for (int j = 0; j <= k; ++j) {
      vector<float> coli;
      vector<float> colj;
      for (int l = 0; l < x.size(); ++l) {
        coli.push_back(A[l][i]);
        colj.push_back(A[l][j]);
      }
      row.push_back(inner_prod(coli, colj));
    }
    AtA.push_back(row);
  }
  return AtA;
}

vector<float> compute_regression(vector<float> &x, vector<float> &y, int k) {
  vector<vector<float>> AtA = compute_AtA(x, k);
  vector<vector<float>> A = create_x_mat(x, k);
  // compute A^T y first
  vector<float> b;
  for (int i = 0; i <= k; ++i) {
    vector<float> coli;
    for (int j = 0; j < x.size(); ++j) {
      coli.push_back(A[j][i]);
    }
    b.push_back(inner_prod(coli, y));
  }

  // initialize x0=[0,0]
  vector<float> m(k + 1);
  int steps = 1000;
  float alpha = 0.001; // step size
  for (int p = 0; p < steps; ++p) {
    vector<float> diff = mat_vec(AtA, m);
    for (int i = 0; i <= k; ++i) {
      diff[i] = alpha * (b[i] - diff[i]);
    }

    for (int i = 0; i <= k; ++i) {
      m[i] += diff[i];
    }
    for (int i = 0; i <= k; ++i) {
      cout << m[i] << " ";
    }
    cout << "\n";
  }
  return m;
}
