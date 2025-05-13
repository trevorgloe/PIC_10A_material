// Structs!!!

#include <ios>
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

	string apa_cite() {
		string cite = "(" + author_last;
		cite.push_back(' ');
		cite = cite + to_string(year);	
		cite.push_back(')');	
		return cite;
	}
};

/**
Determines if the first source given is newer than the second source given and returns true if so

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
		if (s1.month > s2.month) {
			return true;
		} else if (s1.month < s2.month) {
			return false;
		} else {
			cout << "Cannot determine which is newer..." << "\n";
			return false;
		}
	}
}


int main() {
	// Today we will talk about CLASSES!! WOOO
	// Except we're not actually going to talk about classes technically, we're going to talk about structs
	// Preface: you are going to learn about the struct keyword and the class keyword, and basically learn that they are interchangable
	// while this is technically correct, and I am legally obligated to teach you to use structs in the following way, I must tell you all that people very much do NOT use structs this way in the real world
	// Even though structs can be used this way, they should generally NOT be
	// In real-life C++ programming, structs are used to hold simple collections of different data types which will not change and little to no member functions, they should generally not be default constructed
	// Classes should hold more complicated arrangements of data and LOTS of member functions. Classes should be used colloquially not just to tell the what is there but also how to use the data there
	// You might think this is just programer pedanticness, but C++ is there to tell humans what you want to do just as much as machines (thats why we use helpful keywords like "function"), so even though the machines will understand, humans will not understand well and your code will not be very readable
	// When we talk about "best practices" this is not just to give programmers an excuse to yell at new developers, it is an agreed upon standard which makes communicating what you want/think your code should do eaiser
	// With that out of the way, lets do the exact opposite of what I said to do
	
	// you might wonder why C++ has structs and classes when they are functionally almost the same
	// This is entirely just because C has structs but no classes. When people were making C++ back in the day, they wanted a C++ program to do with regular C code (backwards compatibility) so to do that, they had to include structs and beef them up a bit
	
	// A class (or in our case, sometimes just called a struct, or data structure) is a new data type that YOU define
	// (define the Source struct above)
	Source a; // we can create an instance of our struct 
	a.author_first = "Trevor";
	a.author_last = "Loe";
	a.title = "Commissioning the Muon Campus External Beamline: First Beam Optics Measurement";
	a.year = 2023;
	a.journal = "Journal Instrumentation";
	a.month = 4;
	a.preprint = false;
	// now we can access any of that data with these nice keywords (organization)
	cout << a.title << "\n";
	cout << a.month << "\n";
	// we can also add member functions to our struct (try to avoid in real life) which will have access to the data in there (write member function APA cite)
	cout << a.apa_cite() << "\n";
	
	// we can also write functions that take this new data type as their input (create newer function) 
	Source b;
	b.author_first = "Leah";
	b.author_last = "Keating";
	b.title = "A generating-function approach to modelling complex contagion on clustered networks with multi-type branching processes";
	b.year = 2023;
	b.journal = "Journal of Complex Networks";
	b.month = 12;
	b.preprint = false;
	cout << boolalpha;
	cout << newer(a, b) << "\n";

	return 0;
}
