#include "vector.hpp"









size_t my::vector::size()     const { return siz; }
size_t my::vector::capacity() const { return cap; }

bool my::vector::empty() const { return siz == 0; }























void my::vector::pop_back() { siz -= 1; }



void my::vector::new_capacity(size_t n) {
    cap = n;
    int* new_ptr = new int[cap];

    for (size_t i = 0; i < siz; ++i) {
        new_ptr[i] = ptr[i];
    }
    delete[] ptr;

    ptr = new_ptr;
}




































































const int* my::vector::data() const { return ptr; }
      int* my::vector::data()       { return ptr; }


void my::swap(vector& v1, vector& v2) {
    v1.swap(v2);
}




namespace my {


    vector::iterator               vector::begin()         { return  { this, ptr       }; }
    vector::iterator               vector::end()           { return  { this, ptr + siz }; }

    vector::const_iterator         vector::begin()   const { return  { this, ptr       }; }
    vector::const_iterator         vector::end()     const { return  { this, ptr + siz }; }

    vector::const_iterator         vector::cbegin()  const { return  { this, ptr       }; }
    vector::const_iterator         vector::cend()    const { return  { this, ptr + siz }; }


    vector::reverse_iterator       vector::rbegin()        { return  { this, ptr + siz - 1 }; }
    vector::reverse_iterator       vector::rend()          { return  { this, ptr       - 1 }; }

    vector::const_reverse_iterator vector::rbegin()  const { return  { this, ptr + siz - 1 }; }
    vector::const_reverse_iterator vector::rend()    const { return  { this, ptr       - 1 }; }

    vector::const_reverse_iterator vector::crbegin() const { return  { this, ptr + siz - 1 }; }
    vector::const_reverse_iterator vector::crend()   const { return  { this, ptr       - 1 }; }


}




bool my::operator!=(const vector::iterator& it1, const vector::iterator& it2) {
    return (it1.curr != it2.curr) || (it1.container != it2.container);
}
bool my::operator!=(const vector::const_iterator& it1, const vector::const_iterator& it2) {
    return (it1.curr != it2.curr) || (it1.container != it2.container);
}
bool my::operator!=(const vector::reverse_iterator& it1, const vector::reverse_iterator& it2) {
    return (it1.curr != it2.curr) || (it1.container != it2.container);
}
bool my::operator!=(const vector::const_reverse_iterator& it1, const vector::const_reverse_iterator& it2) {
    return (it1.curr != it2.curr) || (it1.container != it2.container);
}
