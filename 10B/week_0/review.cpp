#include<iostream>
#include<vector>
#include<vector>
#include<set>
#include<unordered_set>
#include<cmath>

using namespace std;

// Lets review a bit about classes
class TwoInts {
public: // necessary to have access to stuff outside the class
	TwoInts(int _first, int _second) : first(_first), second(_second) {} // non-default constructor with no body
	
	int sum_them() {
		return first + second;
	}

private:
	int first;
	int second;
};
	

int main() {
	// Welcome!
	/*
	Hello! Welcome to PIC10B. My name is Trevor and I will be your TA for the quarter, teaching this discussion.
	
	- Logistics: my email is tgloe@math.ucla.edu, my office is MS 2954, and my office hours are preliminarily Wednesday at 3pm and Thursday at 11am (after this discussion). You are always free to email me with any questions or concerns. I believe there will be a Piazza for this class (still need to ask the professor about that) so I will likely also answer questions through there. But the best place to go for help is my office hours. 
	- A bit about me: I did my undergrad at Cal Poly San Luis Obsipo in Physics and Math. Before coming here I worked as a software engineer for just under a year. As a software engineer, I mainly worked on embedded systems. My current research is in numerical linear algebra in the math dept. I'm really into climbing, hiking, and surfing so if you're looking for any reccomendations, let me know!
	- What we'll do here: There discussions can be difficult to do in a really effective way, so I apologize if you feel as though what we're doing isn't helping you as much as it could. I will try to ask for your feedback throughout the quarter and probably do a survey halfway through to get your thoughts. My experience with programming and C++ is a bit more practically-minded, so I will often try to emphacize the knowledge that is important for you "on the ground". I think that a deep theoretical understanding of the language and how it works is important, but its also good to know how the things you're learning can actually be useful to you. On top of that, it is likely that many of you will have technical interviews at some point, and if you put that you know C++ on your resume, they will undoubtably fling some C++ questions at you. So, my philosophy with this discussion is to 
		1. Help you build up the problem solving skills necessary to answer the test questions, and do the homework problems
		2. Give you the knowledge (and practice) necessary to answer the kind of interview questions you may be asked about C++
	What I will start off trying to do is to first go through an example of two of the concepts that we are using, and then set up another problem for you all to work on. I'll give you a few minutes to try it out and then we can reconvine and discuss the answer. 
	Of course, this discussion is for you, so ask as many questions as you like and I will try to ask at the begining if there are any things people want me to go over.

	Finally, I just want to emphacize that programming is hard, especially C++. Having times where you feel dumb is an unfortunate part of the learning process but you are NOT dumb and I will never think you are for asking a question or needing further help. We all come to this class with different levels of expertise in C++ and you should not feel bad about that. If there is ever something you'd like to ask not in front of the class, I encourage you to come to my office hours or email me. I want you all to succeed in this class and I am here to help with that. 
	*/

	// Now lets get into some review
	// This course is largely focussed on object oriented programming (OOP) which means we will be heavily relying on classes. We will also talk a lot about memory management, so pointers and the different kinds of memory will come up a lot. If there are any questions about some of this material, please ask now. Otherwise, lets talk about a few specific things that will likely come up. Some data structures. 
	// First, vectors
	vector<int> v = {1, 2, 3, 4}; // one of 3 different initializers
	// We can print with a normal for loop
	for (int i=0; i<v.size(); i++) {
		cout << v[i];
	}
	cout << "\n";
	// Or a range-based loop
	for (int i : v) {
		cout << i;
	}
	cout << "\n";

	// sets
	set<char> B;
	B.insert('a');
	B.insert('b');
	B.insert('c');
	cout << "The set B: \n";
	for (char a : B) {
		cout << a << "\n";
	}

	// unordered set
	unordered_set<char> A;
	A.insert('a');
	A.insert('d');
	A.insert('e');
	cout << "The set A: \n";
	for (char a : A) {
		cout << a << "\n";
	}

	// Both sets have a "count" method which tells you if an element is in there
	cout << A.count('a') << "\n";

	// We made a class up above called TwoInts
	TwoInts T(1, 2);
	// Now T is the class, and we can make a pointer to the class with 
	TwoInts* Tp = &T;
	cout << Tp->sum_them() << "\n"; // to access member variables or functions of a pointer, use->
	
	vector<int> w = {2,1,2,3};
	// If we want to see where Tp actually refers to we can look at 
	cout << "Address of T is " << Tp << "\n";
	// Compare that to the address of a different variable
	int a = 1;
	int* ap = &a;
	cout << "Address of a is " << ap << "\n";
	// Compare this to the address of v
	int* vp = &v[0];
	cout << "Address of v1 is " << vp << "\n";
	cout << v.capacity() << "\n";
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	cout << v.capacity() << "\n";
	int* vp2 = &v[0];
	cout << "The address of v1 is now " << vp2 << "\n";
	
	return 0;
}
