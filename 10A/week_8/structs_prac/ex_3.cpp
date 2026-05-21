#include <fstream>
#include <functional>
#include <iostream>
/*
The following code is for solving an ODE, but it is missing the definition of a
struct that is required to make it work. The struct should specify the
parameters for running the ODE solver.
*/

using namespace std;

float f(float x, float t) { return x; }

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

int main() { return 0; }
