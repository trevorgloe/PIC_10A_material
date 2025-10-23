#include<iostream>
#include<string>

using namespace std;

const char& f(const string& s) {
	return s[0];
}

int main() {
	const char& c = f("Hello");
	cout << c << "\n";
	return 0;	
}

