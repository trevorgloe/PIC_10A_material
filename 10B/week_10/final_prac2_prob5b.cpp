#include<iostream>

struct C {
struct iterator {
int operator*() const { return 6; }
iterator& operator++() { return *this; }
};
iterator begin() { return iterator(); }
iterator end() { return iterator(); }
};
bool operator!=(const C::iterator&, const C::iterator&) {
static int counter = 0; ++counter;
return counter != 4 ;
}
int main() {
C c;
for (int val: c) { std::cout << val; }
std::cout << std::endl;
return 0;
}
