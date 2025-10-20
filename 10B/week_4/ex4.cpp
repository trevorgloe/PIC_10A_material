#include<iostream>
#include<string>

// What is wrong with the code below?
// Which of two function calls is correctly using the function, and which would give undefined behavior? Why?
using namespace std;

const char& getTop(const string& s) {	
	return s[0];
}

int main() {
	char c1 = getTop("Hello");
	const char& c2 = getTop("Hello");
	
	cout << c1 << "\n";
	cout << c2 << "\n";

	return 0;
}

