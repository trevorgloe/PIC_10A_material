
#include "sales_day.hpp"

Sales_Day::Sales_Day(vector<Purchase> _all_purchases) : all_purchases(_all_purchases) {};

void Sales_Day::print() const {
	cout << "Sales day object with " << all_purchases.size() << " entries" << "\n";
}

float Sales_Day::tot_price_morn() const {
	float tot = 0.0;
	// iterate through all purchases
	for (int i=0, N=all_purchases.size(); i < N; i++) {
		if (all_purchases[i].time_day() == 0) {
			tot += all_purchases[i].price;
		}
	}
	return tot;
}

float Sales_Day::tot_price_mid() const {
	float tot = 0.0;
	// iterate through all purchases
	for (int i=0, N=all_purchases.size(); i < N; i++) {
		if (all_purchases[i].time_day() == 1) {
			tot += all_purchases[i].price;
		}
	}
	return tot;
}

float Sales_Day::tot_price_after() const {
	float tot = 0.0;
	// iterate through all purchases
	for (int i=0, N=all_purchases.size(); i < N; i++) {
		if (all_purchases[i].time_day() == 2) {
			tot += all_purchases[i].price;
		}
	}
	return tot;
}
