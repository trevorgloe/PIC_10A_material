#ifndef SPARSE_HPP
#define SPARSE_HPP

#include<vector>
#include<iostream>

class SparseVec {
private:
	float* data;
	std::vector<int> idx;
      	size_t n;
	float* z;
	size_t c;

	// search the populated indices
	int is_in(const int& i) const;
public:
	// constructors
	SparseVec();
	SparseVec(size_t c, size_t n);

	// destructor
	~SparseVec();

	// add element
	void add(const float& val, const int& i);

	// get element
	float& get(const int& i);


	// float& test();
};

#endif
