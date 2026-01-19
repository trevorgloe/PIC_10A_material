#include <iostream>
struct R {
int* p;
int get() const { return *p; }
void update(int i) const { *p = i; }
R() : p(new int(0)) {}
R(const R& r) : p(r.p) {}
~R() { delete p; }
};
int main() {
R r1;
{
R r2(r1); // line 17
r1.update(8); // line 18
}
std::cout << r1.get() << std::endl;
r1.p = nullptr;
return 0;
}
