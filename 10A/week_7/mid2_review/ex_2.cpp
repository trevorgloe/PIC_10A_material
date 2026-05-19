#include<iostream>
#include<string>
#include<vector>

// how can I combine this sentence into one string?
using namespace std;

string combine(vector<string>& s) {
	string out;
	for (string& x : s) {
		out += x;
		out += " ";
	}
	
	return out;
}

int main() {
	vector<string> sentence = {"The", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog"};
	vector<int> v = {1,2,3,4};
	for (int& x : v) {
		// whatever
	}
	cout << combine(sentence) << "\n";

	vector<double> container = {1,2,3,4};
	for (double& elem : container) {
		// whatever you want 
	}
	return 0;
}
