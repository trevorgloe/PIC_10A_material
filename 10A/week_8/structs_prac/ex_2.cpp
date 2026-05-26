#include <iostream>
#include <vector>
/*
what is the output for the following code?
*/

using namespace std;

struct Log {
  size_t cnt = 0;
  vector<float> prices;

  float total() const {
    float tot = 0.0;
    for (float x : prices) {
      tot += x;
    }
    return tot;
  }
  void add_item(float price) {
    prices.push_back(price);
    cnt++;
  }
};
int main() {
  Log l;
  l.add_item(1.5);
  l.add_item(1.5);
  l.add_item(2.0);
  l.add_item(3.5);
  cout << l.cnt << "\n";
  cout << l.total() << "\n";
}
