#include<iostream>
#include<vector>
#include<string>

using namespace std;

float avg(vector<int>& v) {
	float tot = 0.0;
	for (int el : v) {
		tot += el;
	}
	return tot/v.size();
}

string& good_fnc(string& s) {
	for (int i=0; i < s.size(); ++i) {
		s.at(i) += 'A' - 'a';
	}
	return s;
}

int& getElem(vector<int>& v) {
	return v[0];
}

int fnc(const string& s){
	return 0;
}

string& bad_fnc(string& s) {
	string t;
	for (int i=0; i < s.size(); ++i) {
		t.push_back(s.at(i) + 'A' - 'a');
	}
	return t;
}

int& returnStat() {
	static int a = 3;
	a++;
	return a;
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
	string s = "mylowercase"; 
	string& t = good_fnc(s);
	cout << t << "\n"; 
	cout << s << "\n";

	string s2 = "newlower";
	// string& t2 = bad_fnc(s2);
	// cout << t2 << "\n";
	//
	// Question: what would happen if I returned a reference to a static variable?

	return 0;
}
