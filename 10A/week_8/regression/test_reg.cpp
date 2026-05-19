#include "fnc.hpp"
#include <iostream>

using namespace std;

int main() {
  // vector<float> x = {1,2,3,4,4,3.5, 2};
  // vector<vector<float>> A = create_x_mat(x, 1);
  // cout << A.size() << " by " << A[0].size() << "\n";
  // for (int i=0; i<7; ++i) {
  //     cout << A[i][1] << " " << "\n";
  // }
  vector<float> x;
  vector<float> y;
  read_into_vecs("data.txt", x, y);
  for (int i = 0; i < y.size(); ++i) {
    cout << y[i] << "\n";
  }
  // vector<vector<float>> AtA = compute_AtA(x, 1);
  // cout << AtA[0][0] << " " << AtA[0][1] << "\n" << AtA[1][0] << " " <<
  // AtA[1][1] << "\n"; cout << inner_prod(x, x) << "\n"; vector<float>
  // ones(2, 1.0); vector<float> test = mat_vec(AtA, ones); cout << test[0] << "
  // " << test[1] << "\n";

  vector<float> m = compute_regression(x, y, 2);
  cout << "final answer: " << m[0] << " " << m[1] << "\n";

  return 0;
}
