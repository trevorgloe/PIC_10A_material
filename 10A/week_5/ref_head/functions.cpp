// Another file to define my functions
// need to include the associated header file

#include "functions.hpp"

void pop_two(std::string &s) {
    s.pop_back();
    s.pop_back();
}

int first_a(std::string s) {
    // dumb way to find the first occurance of a
    int idx = -1;
    for (int i=0; i < s.length(); i++) {
         // check if the current char is a
         if (s.at(i) == 'a') {
            idx = i;
            break;
        }
    }
    return idx;
}
