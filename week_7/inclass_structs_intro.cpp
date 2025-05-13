// Structs!!

#include <iostream>
#include <string>

using namespace std;

struct Source {
	string author_first;
	string author_last;
	int year;
	string title;
	string journal;
	int month;
	bool preprint;

	Source(int _month) : author_first(""), author_last(""), year(2000), title(""), journal(""), month(_month), preprint(false) {
	cout << "Default constructed" << "\n";
	}
	Source() : author_first(""), author_last(""), year(2000), title(""), journal(""), month(), preprint(false) {
	cout << "Default constructed" << "\n";
	}

	string apa_cite() {
		string cite = "(" + author_last;
		cite.push_back(' ');
		cite = cite + to_string(year);
		cite.push_back(')');
		return cite;
	}
};

/**
Determines if the first source given is newer than the second

@param Source& s1 : first source
@param Source& s2 : second source
@return bool : true if s1 is newer than s2
*/
bool newer(const Source& s1, const Source& s2) {
	if (s1.year > s2.year) {
		return true;
	} else if (s1.year < s2.year) {
		return false;
	} else {
		// check the month
		if (s1.month > s2.month) {
			return true;
		} else if (s1.month < s2.month) {
			return false;
		} else {
			cout << "Cannot determine which is newer.." << "\n";
			return false;
		}
	}
}

int main() {
	// Today we learn about CLASSES
	// WOOOOO
	Source a(1);
	a.author_first = "Trevor";
	a.author_last = "Loe";
	a.title = "Commissioning the Muon Campus External Beamline: First Beam Optics Measurement";
	a.year = 2023;
	a.journal = "Journal of Instrumentation";
	a.month = 4;
	a.preprint = false;
	cout << a.title << "\n";
	cout << a.month << "\n";
	
	Source b;
	cout << b.year << "\n";
	cout << newer(a, b) << "\n";
	cout << a.apa_cite() << "\n";	
	return 0;
}
