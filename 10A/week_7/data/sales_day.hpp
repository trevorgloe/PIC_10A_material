// struct to store all the purchases from a day

#ifndef SALES_DAY_HPP
#define SALES_DAY_HPP

#include <iostream>
#include <vector>
#include <string>
#include "purchase.hpp"

using namespace std;

struct Sales_Day {
	vector<Purchase> all_purchases; // the purhcases for the day
	int num_apple;
	int num_pear;
	int num_grape;
	int num_mango;
	int num_orange;
	int num_cherry;

	Sales_Day(vector<Purchase> _all_purchases);

	void print() const;

	float tot_price_morn() const; // total money people spent in the morning
	float tot_price_mid() const; // total money people spend in the mid-day
	float tot_price_after() const; // total money people spent in the afternoon
	
	void compute_tots();
};

#endif
