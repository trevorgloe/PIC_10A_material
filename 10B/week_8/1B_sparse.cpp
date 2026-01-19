#include"1B_sparse.hpp"

SparseVec::SparseVec() : data(nullptr), idx(), n(0), z(new float(0)), c(0) {};	
SparseVec::SparseVec(size_t c, size_t n) : data(new float[c]), idx(), n(n), z(new float(0)), c(c) {}

SparseVec::~SparseVec() {
	delete[] data;
}

void SparseVec::add(const float& val, const int& i) {
	if (idx.size() < c) {
		idx.push_back(i);
		data[idx.size()] = val;
	} else {
		std::cout << "Sparse vector is full";
	}
}

float& SparseVec::get(const int& i) {
	int j = is_in(i); // get index	
	if (j != -1) {
		return data[j];
	} else {
		return *z;
	}
}

int SparseVec::is_in(const int& i) const {
	for (int j=0; j< idx.size(); j++) {
		if (i==idx[j]) { return j; }
	}
	return -1;
}

SparseVec::iterator::iterator(const SparseVec* container, float* curr, size_t ind) : container(container), curr(curr), ind(ind) {}

SparseVec::iterator& SparseVec::iterator::operator++() {
	ind++;
	int j = container->is_in(ind);
	if (j != -1) {
		// ind corresponds to a non-zero element
		curr = container->data+j;
	} else {
		curr = container->z;
	}
	return *this;
}

float& SparseVec::iterator::operator*() const {
	return *curr;
}

bool operator!=(const SparseVec::iterator& it1, const SparseVec::iterator& it2) {
	if ((it1.container != it2.container) || (it1.curr != it2.curr) || (it1.ind != it2.ind)) {
		return true;
	} else {
		return false;
	}
}

SparseVec::iterator SparseVec::begin() {
	int j = is_in(0);
	if (j != -1) {
		return {this, &data[j], 0};
	} else {
		return {this, z, 0};
	}
}

SparseVec::iterator SparseVec::end() {
	int j = is_in(n);
	if (j != -1) {
		return {this, &data[j], n};
	} else {
		return {this, z, n};
	}
}
