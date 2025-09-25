// struct to store all the sales for a day

#ifndef SALES_DAY_HPP
#define SALES_DAY_HPP

#include <iostream>
#include <vector>
#include <string>
#include "purchase.hpp"

using namespace std;

struct Sales_Day {
	vector<Purchase> all_purchases;
	int num_apple;
	int num_pear;
	int num_grape;
	int num_mango;
	int num_cherry;
	int num_orange;

	Sales_Day(vector<Purchase> _all_purchases);

	void print() const;

	float tot_price_morn() const; // total price in the morning
	float tot_price_mid() const;
	float tot_price_after() const;
};

#endif
