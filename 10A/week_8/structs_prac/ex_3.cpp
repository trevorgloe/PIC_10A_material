#include <fstream>
#include <functional>
#include <iostream>
/*
The following code is for solving an ODE, but it is missing the definition of a
struct that is required to make it work. The struct should specify the
parameters for running the ODE solver.
*/

using namespace std;

struct Params {
  float start_time;
  float delta_t;
  float end_time;
  float x0;
};

float f(float x, float t) { return x * x; }

void solve_and_save(function<float(float, float)> f, Params p) {
  ofstream output;
  output.open("data.txt");

  float t = p.start_time;
  float delta = p.delta_t;
  const float T = p.end_time;
  float x = p.x0;
  while (t < T) {
    x = x + delta * f(x, t);
    t = t + delta;
    output << x << " ";
  }
}

int main() {
  Params p;
  p.start_time = 0.0;
  p.end_time = 1 / 1.1 + 1e-3;
  p.delta_t = 1e-3;
  p.x0 = 1.1;
  solve_and_save(f, p);

  return 0;
}
