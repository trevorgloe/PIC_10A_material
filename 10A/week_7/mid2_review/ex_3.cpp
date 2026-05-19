#include<iostream>
#include<vector>

using namespace std;

int f(const int& a) {
	return a;
}

int main() {
	int i = 1;
	int j = 2;
	int k = f(i);
	k++;
	
	int& jr = j;
	f(jr);
	cout << i << " " << k << " " << jr << "\n";
}
