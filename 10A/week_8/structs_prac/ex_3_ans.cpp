#include <fstream>
#include <functional>
#include <iostream>

using namespace std;

struct Params {
  float start_time;
  float end_time;
  float delta_t;
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
  p.end_time = 1 / 1.1 + 1e-4;
  p.delta_t = 1e-3;
  p.x0 = 1.1;
  solve_and_save(f, p);
  return 0;
}
