#include<iostream>
#include <vector>
#include<string>

using namespace std;

float avg(vector<int>& v) {
	float tot = 0.0;
	for (int el : v) {
		tot += el;
	}
	return tot / v.size();
}

string& good_fnc(string& s) {
	for (int i=0; i<s.size(); ++i) {
		s.at(i) += 'A' - 'a';
	}
	return s;
}

string bad_fnc(string& s) {
	string t;
	for (int i=0; i < s.size(); ++i) {
		t.push_back(s.at(i) + 'A'-'a');
	}
	return t;
}

int& returnStat() {
	static int af = 3;
	af++;
	return af;
}

int main() {
	// References
	int a = 2;
	int& ar = a;

	a++;
	cout << a << " " << ar << "\n";
	
	vector<int> v(100,4);
	cout << avg(v) << "\n";

	// Returning by reference
	string s = "mylowercasesstring";
	string& t = good_fnc(s);
	cout << t << "\n";
	cout << s << "\n";

	string s2 = "newlower";
	string t2 = bad_fnc(s2);
	cout << t2 << "\n";

	// Q: What would happen if I had a function that returned-by-reference a static variable?
	int& b1 = returnStat();
	int& b2 = returnStat();
	af++;
	cout << b1 << " " << b2 << "\n";
	return 0;
}
