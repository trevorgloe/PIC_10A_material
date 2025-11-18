#ifndef vector_hpp
#define vector_hpp


#include <iostream>
#include <initializer_list>
#include <utility>


namespace my {


class vector {
public:
    vector();
    ~vector();


    size_t size()     const;
    size_t capacity() const;

    bool empty() const;

    const int& operator[](size_t) const;
          int& operator[](size_t);


    explicit vector(size_t);
    vector(size_t, int);
    vector(std::initializer_list<int>);


    void pop_back();
    void clear();


    void reserve(size_t);
    void push_back(int);
    void resize(size_t, int = 0);


    void swap(vector&);

    vector(vector&&);
    vector& operator=(vector&&);

    vector(const vector&);
    vector& operator=(const vector&);


    const int* data() const;
          int* data();


    class iterator;
    iterator begin();
    iterator end();

    class const_iterator;
    const_iterator  begin() const;
    const_iterator  end()   const;

    const_iterator cbegin() const;
    const_iterator cend()   const;

    class reverse_iterator;
    reverse_iterator rbegin();
    reverse_iterator rend();

    class const_reverse_iterator;
    const_reverse_iterator  rbegin() const;
    const_reverse_iterator  rend()   const;

    const_reverse_iterator crbegin() const;
    const_reverse_iterator crend()   const;


private:
    size_t siz;
    size_t cap;
    int*   ptr;


    void new_capacity(size_t);
};


void swap(vector&, vector&);




class vector::iterator {
public:
    iterator(const vector* pv, int* pi) : container(pv), curr(pi) {}

    iterator& operator++() { ++curr; return *this; }
    int& operator*() const { return *curr; } // 'const' makes curr an 'int* const',
                                             // not a 'const int*', so *curr is an int&
private:
    const vector* container;
    int* curr;

    friend const_iterator; // so we can construct const_iterators from iterators
    friend bool operator!=(const iterator& it1, const iterator& it2);
};


class vector::const_iterator {
public:
    const_iterator(const iterator& it) : container(it.container), curr(it.curr) {}
    const_iterator(const vector* pv, const int* pi) : container(pv), curr(pi) {}

    const_iterator& operator++() { ++curr; return *this; }
    const int& operator*() const { return *curr; }

private:
    const vector* container;
    const int* curr; // pointer to const

    friend bool operator!=(const const_iterator& it1, const const_iterator& it2);
};


class vector::reverse_iterator {
public:
    reverse_iterator(const vector* pv, int* pi) : container(pv), curr(pi) {}

    reverse_iterator& operator++() { --curr; return *this; } // only difference from iterator
    int& operator*() const { return *curr; }

private:
    const vector* container;
    int* curr;

    friend const_reverse_iterator;
    friend bool operator!=(const reverse_iterator& it1, const reverse_iterator& it2);
};


class vector::const_reverse_iterator {
public:
    const_reverse_iterator(const reverse_iterator& it) : container(it.container), curr(it.curr) {}
    const_reverse_iterator(const vector* pv, const int* pi) : container(pv), curr(pi) {}

    const_reverse_iterator& operator++() { --curr; return *this; } // only difference from const_iterator
    const int& operator*() const { return *curr; }

private:
    const vector* container;
    const int* curr;

    friend bool operator!=(const const_reverse_iterator& it1, const const_reverse_iterator& it2);
};


}

#endif /* vector_hpp */
