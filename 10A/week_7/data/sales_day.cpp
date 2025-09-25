// cpp file for our sales day struct

#include "sales_day.hpp"
#include "purchase.hpp"

Sales_Day::Sales_Day(vector<Purchase> _all_purchases) : all_purchases(_all_purchases) {};

void Sales_Day::print() const {
	cout << "Sales day struct with " << all_purchases.size() << " data entries" << "\n";
}

float Sales_Day::tot_price_morn() const {
	float tot = 0.0;
	// iterate through all the purchases
	for (int i=0, N=all_purchases.size(); i < N; i++) {
		if (all_purchases[i].time_day() == 0) {
			tot += all_purchases[i].price;
		}
	}
	return tot;
}

float Sales_Day::tot_price_mid() const {
	float tot = 0.0;
	// iterate through all the purchases
	for (int i=0, N=all_purchases.size(); i < N; i++) {
		if (all_purchases[i].time_day() == 1) {
			tot += all_purchases[i].price;
		}
	}
	return tot;
}

float Sales_Day::tot_price_after() const {
	float tot = 0.0;
	// iterate through all the purchases
	for (int i=0, N=all_purchases.size(); i < N; i++) {
		if (all_purchases[i].time_day() == 2) {
			tot += all_purchases[i].price;
		}
	}
	return tot;
}

void Sales_Day::compute_tots() {
	// first day apples
	int tot = 0;
	for (int i=0, N=all_purchases.size(); i < N; i++) {
		tot += all_purchases[i].num_given_fruit("Apple");
	}
	num_apple = tot;

	tot = 0;
	for (int i=0, N=all_purchases.size(); i < N; i++) {
		tot += all_purchases[i].num_given_fruit("Pear");
	}
	num_pear = tot;

	tot = 0;
	for (int i=0, N=all_purchases.size(); i < N; i++) {
		tot += all_purchases[i].num_given_fruit("Grapes");
	}
	num_grape = tot;

	tot = 0;
	for (int i=0, N=all_purchases.size(); i < N; i++) {
		tot += all_purchases[i].num_given_fruit("Cherry");
	}
	num_cherry = tot;

	tot = 0;
	for (int i=0, N=all_purchases.size(); i < N; i++) {
		tot += all_purchases[i].num_given_fruit("Orange");
	}
	num_orange = tot;

	tot = 0;
	for (int i=0, N=all_purchases.size(); i < N; i++) {
		tot += all_purchases[i].num_given_fruit("Mango");
	}
	num_mango = tot;
}
