#include<iostream>
#include<vector>

/*

Example 2: Write an iterator that will allow us to print the Fibonacci numbers up (not including) the nth
*/

using namespace std;

int main() {
	// Should print 1,1,2,4,5,8,13,21,34,55
	for (unsigned int i : Fibonacci(10)) {
		cout << i << ", ";
	}
	cout << "\n";
}
