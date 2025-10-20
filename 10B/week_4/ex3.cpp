#include<iostream>
#include<vector>

// what will be the output of the following code?

using namespace std;

int& ElemRef(vector<int>& v){
	v[0]++;	
	return v[0];
}

int main() {
	vector<int> v = {1,2,3,4};
	int& a1 = ElemRef(v);
	a1++;
	int& a2 = ElemRef(v);
	cout << a1 << "\n";
	cout << a2 << "\n";
	return 0;
}
