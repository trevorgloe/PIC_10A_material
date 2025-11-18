#include <iostream>
#include <vector>
#include "vector.hpp"

int main() {
//    std::vector<int> v;
//    std::vector<int>::iterator it1 = v.begin();
//    std::vector<int>::iterator it2 = v.end();
//    std::vector<int>::reverse_iterator it3 = v.rbegin();
//    std::vector<int>::reverse_iterator it4 = v.rend();
//    std::vector<int>::const_iterator it5 = v.cbegin();
//    std::vector<int>::const_iterator it6 = v.cend();
//    std::vector<int>::const_reverse_iterator it7 = v.crbegin();
//    std::vector<int>::const_reverse_iterator it8 = v.crend();

    my::vector my_v {1, 2, 3, 4, 5, 6, 7, 8};

    for (int val : my_v) {
        std::cout << val << ' ';
    }
    std::cout << std::endl;

    for (auto it = my_v.rbegin(); it != my_v.crend(); ++it) {
        // purposefully forgot 'c' in crbegin
        // operator!= can rely on iterator -> const_iterator conversion
        std::cout << *it << ' ';
    }
    std::cout << std::endl;

    return 0;
}
