// header file for our purchase class

#ifndef PURCHASE_HPP
#define PURCHASE_HPP

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Purchase {
	string name;
	vector<string> fruit;
	float price;
	int hour;
	int minute;
	
	Purchase(string _name, vector<string> _fruit, float _price, int _hour, int _minute);
	
	// return 0 if purchase happened in the morning, 1 if mid-day, and 2 if afternoon
	int time_day() const;

	// returns the number of times the specified fruit was bought (specified with a string)
	int num_given_fruit(string giv_fruit);	
	
};

#endif
