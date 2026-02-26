#include<iostream>

using namespace std;

int main() {
	int* p = new int[3]{1,2};
	for (int i=0; i < 3; ++i) {
		cout << p[i] << " ";
	}
	cout << "\n";
}
