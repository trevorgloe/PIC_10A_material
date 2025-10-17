#include<iostream>
#include<vector>

using namespace std;

// Compute the nth fibonacci number using a divide and conquer approach
int div_conq_fib(int idx) {
	if (idx == 0 || idx == 1) {
		return 1;
	} else {
		return div_conq_fib(idx-1) + div_conq_fib(idx-2);
	}
}

int dyn_prog_fib(int idx) {
	// memoization with F	
	vector<int> F;
	// first two elements
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
	while (target > 0) {
		// greedy step: take the largest coin we possibly can
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

int main() {
	// Quick discussion on algorithmic paradigms
	// We've learned a bit about recursion, and several algorithms that use recursion. I want to give a quick overview of the general framework in which people use to organize algorithms like this
	
	// A paradigm is basically just a broad strategy for solving a problem
	// An algorithmic paradigm is a general strategy that applied to many algorithms and often gives us a starting point for creating an algorithm ourselves
	// There are many, but I'll just talk about these 3:
	// 1. Divide and conquer 
	// 2. Dynamic programming
	// 3. Greedy
	
	// 1. 
	// Divide and conquer is what we've already been doing
	// Divide your original problem into subproblems, and then solve the subproblems separately (typically with recursion), and then recombine them at the end
	cout << div_conq_fib(6) << "\n";
	// Simple to understand why (at least in this case) and simple, but can be slow
	
	// 2. 
	// Dynamic programming is basically just the idea of solving each subproblem only once and storing the result. This is particularly good when subproblems would often be repeated with a recursive algorithm
	cout << dyn_prog_fib(6) << "\n"; // reduces an exponential time algorithm to a linear-time one
	
	// 3. 
	// Greedy algorithms are algorithms that, at each step, make a local decision about the problem they are solving. Often the idea is to solve each sub-problem optimally, but only using local information
	// Greedy algorithms will not always give you the best outcome, but they are usually very fast
	// Ex: Coin change problem: we are given a bunch of coins and want to find the minimum number of coins required to make a certain dollar amount
	vector<int> cents = {1, 1, 5, 10, 25, 25, 50, 50, 50, 100}; // cent values for the coins we have
	const int target = 130;
	vector<int> coins = greedy_coin(target, cents);
	for (int coin : coins) {
		cout << coin << " ";
	}
	cout << "\n";

	return 0;
}
