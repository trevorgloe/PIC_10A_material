#include "fnc.hpp"
#include<cmath>

using namespace std;

float inner_prod(vector<float>& v, vector<float>& u) {
    float tot = 0.0;
    if (v.size() != u.size()) {
        throw invalid_argument("vectors are not the same size\n");
    }
    for (int i=0; i<v.size(); ++i) {
        tot += v[i]*u[i];
    }
    return tot;
}

vector<float> mat_vec(vector<vector<float>>& A, vector<float>& x) {
    vector<float> out(A.size()); // pre-allocate out
    for (int i=0; i<A.size(); ++i) {
        out[i] = inner_prod(A[i], x);
    }
    return out;
}

vector<vector<float>> create_x_mat(vector<float>& x, int k) {
    vector<vector<float>> A;
    for (int i=0; i< x.size(); ++i) {
        vector<float> row;
        for (int j=0; j<=k; ++j) {
            row.push_back(pow(x[i], j));
        }
        A.push_back(row);
    }
    return A;
}

void read_into_vecs(string s, vector<float>& x, vector<float>& y) {
    ifstream file(s);
    string line;
    while (getline(file, line)) {
        size_t space_idx = line.find(" ");
        x.push_back(stof(line.substr(0, space_idx)));
        y.push_back(stof(line.substr(space_idx+1, line.size()-space_idx-1)));
    }
}

vector<float> compute_regression(vector<vector<float>>& A, vector<float>& y) {
    
}
