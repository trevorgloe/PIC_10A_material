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
};

#endif
