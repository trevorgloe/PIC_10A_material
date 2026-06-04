#include <iostream>
#include <vector>

using namespace std;

class PointMass {
private:
  float x;
  float force;
  float v;
  float mass;

public:
  PointMass();
  PointMass(float _x, float m) : x(_x), force(0.0), v(0.0), mass(m) {
    cout << "Constructed point mass with " << x << " and " << mass << "\n";
  };
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
};

PointMass::PointMass() : x(0), force(0), v(0), mass(0) {};

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
};

int main() {
  vector<float> xs = {1, 2, 3, 4};
  vector<float> masses = {1, 1, 2, 1};
  Simulation s(xs, masses, 1e-2);

  return 0;
}
