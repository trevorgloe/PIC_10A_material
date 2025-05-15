// storing our class for a single purchase

#include "purchase.hpp"

Purchase::Purchase(string _name, vector<string> _fruit, float _price, int _hour, int _minute) : name(_name), fruit(_fruit), price(_price), hour(_hour), minute(_minute) {};

int Purchase::time_day() const {
	// if we're before 10:30, morning
	if (hour < 10) {
		return 0;
	} else if (hour == 10 && minute <= 30) {
		return 0;
	} else {
		// if we're before 2pm, its mid-day
		if (hour < 14) {
			return 1;
		} else {
			return 2;
		}
	}
}

