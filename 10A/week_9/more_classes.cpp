#include <iostream>
#include <vector>

// lets simulate some gravity! In 1D since doing more dimensions is hard

using namespace std;

class PointMass {
private:
  float x;
  float force;
  float v;
  float mass;

public:
  PointMass(float _x, float m) : x(_x), force(0.0), v(0.0), mass(m) {};
  void compute_force(vector<PointMass> others) {
    float newforce = 0.0;
    for (PointMass p : others) {
      newforce += -1.0 / ((p.x - x) * (p.x - x));
    }
    force = newforce;
  }
  void propogate(float delta_t) {
    v += delta_t * force / mass;
    x += delta_t * v;
  }
  float get_pos() { return x; }
};

class Simulation {
private:
  vector<PointMass> points;
  float delta_t;

public:
  Simulation(vector<float> xs, vector<float> masses, float dt)
      : points(), delta_t(dt) {
    for (int i = 0; i < xs.size(); ++i) {
      points.push_back(PointMass(xs[i], masses[i]));
    }
  }

  vector<vector<float>> run_sim(int N) {
    vector<vector<float>> all_pos;
    for (int i = 0; i < points.size(); ++i) {
      vector<float> newpos;
      all_pos.push_back(newpos);
    }
    for (int n = 0; n < N; ++n) {
      for (int i = 0; i < points.size(); ++i) {
        vector<PointMass> others;
        for (int j = 0; j < points.size(); ++j) {
          if (j != i) {
            others.push_back(points[j]);
          }
        }
        points[i].compute_force(others);
      }
      for (int i = 0; i < points.size(); ++i) {
        points[i].propogate(delta_t);
        all_pos[i].push_back(points[i].get_pos());
      }
    }
    return all_pos;
  }
};

int main() {
  vector<float> xs = {1, 2, 3, 4};
  vector<float> masses = {1, 1, 2, 1};
  Simulation s(xs, masses, 1e-2);
  vector<vector<float>> all_pos = s.run_sim(1000);
  for (int i = 0; i < 1000; ++i) {
    cout << all_pos[0][i] << " " << all_pos[1][i] << " " << all_pos[2][i] << " "
         << all_pos[3][i] << "\n";
  }
  return 0;
}
