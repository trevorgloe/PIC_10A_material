// storing our class for a single purchase

#include "purchase.hpp"

Purchase::Purchase(string _name, vector<string> _fruit, float _price, int _hour, int _minute) : name(_name), fruit(_fruit), price(_price), hour(_hour), minute(_minute) {};

// make this member function const because we don't want to be changing the member variables
int Purchase::time_day() const {
	// if we're before 10:30, we'll say that the morning
	if (hour < 10) {
		return 0;
	} else if (hour == 10 && minute <= 30) {
		return 0;
	} else {
		// if we're before 2pm, thats mid-day
		if (hour < 14) {
			return 1;
		} else {
			return 2;
		}
	}
}

int Purchase::num_given_fruit(string giv_fruit) {
	// we need to delete any leading or trailing spaces from the fruit strings in the vector
	int tot = 0; // when you do this make it not initialized to show them a common mistake
	for (int i=0, N=fruit.size(); i < N; i++) {
		if (fruit[i].at(0) == ' ') {
			fruit[i].erase(0,1);
		} else if (fruit[i].at(fruit[i].size() - 1) == ' ') {
			fruit[i].pop_back();
		}
		// cout << fruit[i] << "\n";
		if (fruit[i] == giv_fruit) {
			tot++;
		}
	}
	return tot;

}
