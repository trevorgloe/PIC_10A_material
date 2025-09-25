// Function for our other code

#include "functions.hpp"

void pop_two(std::string &s) {
    s.pop_back();
    s.pop_back();
}

int first_a(std::string s) {
    int idx = -1;
    for (int i=0; i < s.length(); i++) {
         // check if the char is a
         if (s.at(i) == 'a') {
            idx = i;
            break;
         }
    }
    return idx;
}
