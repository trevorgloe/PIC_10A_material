#include<iostream>
#include<vector>

// Should the following functions return by reference or by value? Why?
// Answer for each one

using namespace std;

int biggerThan(vector<int>& v, int thresh) {
	// get the first value bigger than thresh
	for (int el : v) {
		if (el > thresh) {
			return el;
		}
	}
	return 0;
}

int biggerThanIdx(vector<int>& v, int thresh) {
	// get the index of the first value bigger than thresh
	for (int i=0; i < v.size(); ++i) {
		if (v.at(i) > thresh) {
			return i;
		}
	}
	return -1;
}
