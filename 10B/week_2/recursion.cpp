#include<iostream>
#include<vector>
#include<string>
#include<functional>

using namespace std;

int my_log2(int n, int cnt=0) {
	// do integer division (without remainder) and recurse
	int new_n = n/2;
	if (new_n==0) {
		return cnt;
	}
	cnt = my_log2(new_n, cnt+1);
	return cnt;
}

float f(float x) {
	return 2*x*x - 3*x;
}

float integral(function<float(float)> f, float upper, float lower, float eps) {
	// integral using one region
	float onereg = f(lower) * (upper - lower);

	// integral using two regions
	float midpoint = (upper + lower) / 2.0;
	float tworeg_1 = f(lower) * (midpoint - lower);
	float tworeg_2 = f(midpoint) * (upper - midpoint);
	cout << abs(tworeg_1 + tworeg_2 - onereg) << "\n";	
	cout << "Upper=" << upper << " lower=" << lower << "\n";
	if (abs(tworeg_1 + tworeg_2 - onereg) < eps) {
		cout << "Successfully stopped\n";
		return tworeg_1 + tworeg_2;
	} else {
		// recursion step
		cout << "recursing...\n";
		return integral(f, upper, midpoint, eps) + integral(f, midpoint, lower, eps);
	}
}

vector<string> substrings_of_s(string s) {
	// first check if we are at the end
	if (s.size() == 0) {
		vector<string> v;
		v.push_back(""); // add the empty string
		return v;
	}
	
	// now take off the first letter and call the function again
	vector<string> w = substrings_of_s(s.substr(1));
	vector<string> v; // the substrings for all of s (including the first letter)
	for (string t : w) {
      		v.push_back(t);
      		v.push_back(s[0] + t);
      	}
	return v;
}


int main() {
	// Recursion!
	// Recursion is really hard, but I will try to give an explaination of the stuff we do that is fairly understandable, using pictures
	// Recursion is just calling a function in its own body
	cout << my_log2(35) << "\n";
	// recursion can be a very efficient way to do things but there are two big considerations
	// 1. Could you save time by saving the data between layers of the recusion (this is the basis of dynamic programming)
	// 2. This causes the stack to get really big in many cases, and you have to careful about memory overflow. Make sure that the stopping condition for the recursion will always be met
	
	// Now lets do one!
	// This is a REAL application of recursion, in that this is what is really used in state of the art algorithms. It is not really possible without recursion (at least not possible to do in this exact way).
	// An integral is the area under a curve, which we will approximate by a bunch of rectangles under the curve. Specifically we will approximate the integral by 
	// sum_{i=1}^n f(x_i) Delta x_i
	// The question is what x_i to pick to make the integral accurate...
	// What we can do is break up the domain [0,1] into two regions by splitting in the middle
	// Then we can compute the integral via the brocken up region and via the non broken up region. If the difference is below a certain threshold, we stop. Otherwise, we recurse on each of the halves
	// WARNING: This example involves passing a function as an argument into another function. This is a fairly unusual technique but is very useful here. Don't worry two much about how to do it, just use the template I gave
	//
	
	// Step 1: 
	// Compute the integral using one region, just using upper and lower
	//
	// Step 2: 
	// Compute the integral using two regions. So find the midpoint of the upper and lower (upper + lower / 2) and compute the integral with two regions
	//
	// Step 3: (hard part)
	// Compute the integral computed with one region and two region, and recurse if it is above a certain threshold. By recurse I mean call integral twice on the two regions you just created. If it is below the threshold, then just return the integral you computed with two regions
	
	float upper = 1.0;
	float lower = 0.0;
	float eps = 0.000001;
	cout << integral(f, upper, lower, eps) << "\n";

	// Next problem: substrings
	// We want a function that will return a vector of all the substrings of the given string
	// Where is the recursion? Well if we have the string "abcd", then all the substrings of it are the substrings of "bcd" with and without the "a"
	// So we will call the function on the string without the first letter (until we run out of letters)
	string s = "cheese";
	vector<string> v = substrings_of_s(s);
	for (string t : v) {
		cout << t << "\n";
	}
	
	return 0;
}
