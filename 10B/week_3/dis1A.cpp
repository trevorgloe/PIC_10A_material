#include<iostream>
#include<vector>
#include<string>

using namespace std;

int div_conq_fib(int idx) {
	if (idx == 0 || idx == 1) {
		return 1;
	} else {
		return div_conq_fib(idx-1) + div_conq_fib(idx-2);
	}
}

int dyn_prog_fib(int idx) {
	// memoization
	vector<int> F; // memo
	F.push_back(1);
	F.push_back(1);

	if (idx==0 || idx==1) {
		return F[0];
	}

	for (int j=2; j<idx; ++j) {
		F.push_back(F[j-1] + F[j-2]);
	}
	return F[idx-1] + F[idx-2];
}

vector<int> greedy_coin(int target, vector<int> cents) {
	vector<int> out;
	while(target > 0) {
		// take the largest coin we can
		int val = 0;
		size_t idx = 0;
		size_t cnt = 0;
		for (int v : cents) {
			if (v > val && v <= target) {
				val = v;
				idx = cnt;
			}
			cnt++;
		}
		target -= val;
		out.push_back(val);
		cents.erase(cents.begin() + idx);
	}
	return out;
}

vector<string> substrings_of_s(string s) {
	// check if we're at the end
	//
	if (s.size() == 0) {
		vector<string> v;
		v.push_back("");
		return v;
	}
	// If not at the end, take off the first letter and call the function again
	vector<string> v;
	string s2 = s.substr(1);
	v = substrings_of_s(s2);
	vector<string> w;
	for (string t: v) {
		w.push_back(t);
		w.push_back(s[0] + t);
	}
	return w;
}

int main() {
	cout << div_conq_fib(10) << "\n";
	cout << dyn_prog_fib(20) << "\n";

	// coin problem
	vector<int> cents = {1,1,5,10,25,25,50,50,50,100};
	const int target = 101;
	vector<int> out = greedy_coin(target, cents);
	for (int v : out) {
		cout << v << " ";
	}
	cout << "\n";

	// Example: substrings
	// given a string, we want to print out all of the substrings 
	string s = "cheese";

	return 0;
}
