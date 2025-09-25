// Lets make a program for a data science application
// Setup: suppose you are working for a grocery store selling fruit, and they want to know some analytics about how the fruit has been selling
// specifically they want to know what time of day the most sales happen, what the most popular fruit is, and who bought the most fruit
// They give you a big text file with over a hundred names of people, what they purchased, what time of day, and how much they spent

#include <iostream>
#include <fstream>
#include <string>
#include "purchase.hpp"
#include "sales_day.hpp"

using namespace std;

int main() {
	// first we need to create a struct to store a single purchase	
	string test_name = "Bob";
	vector<string> fruits = {"apples"};
	float price = 1.0;
	int hour = 1;
	int min = 2;
	Purchase a(test_name, fruits, price, hour, min);
	cout << a.name << "\n";

	// not required that you know how to do this for this class but helpful - heres how you would read data from a file
	// Notice that this is another example of a "stream" justlike we have the input stream with cin and cout
	vector<Purchase> all_purchases;
	ifstream MyReadFile("fruit_data.txt");
	string line;
	while (getline (MyReadFile, line)) {
	  // Output the text from the file
		// format the data from the line into the necessary information
		size_t pos1 = line.find(';');
		string name = line.substr(0, pos1);
		// cout << name << "\n";
		// get all the fruits
		vector<string> this_fruits;
		bool colon_flag = false;	
		while (!colon_flag) {
			int first_comma = line.find(',', pos1+1);
			int first_colon = line.find(':', pos1+1);
			// cout << "first comma is " << first_comma << "first colon is " << first_colon << "\n";
			if (first_comma > first_colon) {
				colon_flag = true;
			} else {
				string new_fruit = line.substr(pos1+1, first_comma - pos1 - 1);
				this_fruits.push_back(new_fruit);
				pos1 = first_comma;
				// cout << new_fruit << "\n";
			}
		}
		// next get the price
		// cout << line.substr(pos1) << "\n";
		size_t pos2 = line.find(':', pos1+1);
		size_t pos3 = line.find(',', pos2);
		// cout << "pos2 is " << pos2 << " and pos3 is " << pos3 << "\n";
		string price_str = line.substr(pos2+1, pos3 - pos2);
		// cout << price_str << "\n";
		float this_price = stof(price_str);
		// cout << this_price << "\n";
		// finally get the time in two ints
		pos1 = line.find(',', pos2);
		// cout << line.substr(pos1) << "\n";
		int pos4 = line.find(':', pos1);
		string hour_str = line.substr(pos1+1, pos4 - pos1);
		string min_str = line.substr(pos4+1);
		// cout << hour_str << "\n";
		// cout << min_str << "\n";
		int this_hour = stoi(hour_str);
		int this_min = stoi(min_str);
		// cout << "Time is " << this_hour << ":" << this_min << "\n";

		// then create the struct 
		Purchase this_purchase(name, this_fruits, this_price, this_hour, this_min);
		all_purchases.push_back(this_purchase);
	}
	cout << all_purchases[20].name << "\n";
	cout << all_purchases[20].price << "\n";
	cout << all_purchases[149].name << "\n";
	cout << all_purchases[149].minute << "\n";
	cout << all_purchases.size() << "\n";	

	// great! Now we got our data in our nice vector of structs
	// Lets make an encompassing struct that will contain this vector and some other information (make sales_day struct)
	Sales_Day today(all_purchases);
	today.print();

	/* First task: figure out what time of day the most sales happen
	theres a lot of different ways we could do this, but lets just say theres morning, mid-day, and afternoon
	*/
	// To make this convenient, lets put a function inside our purchase struct that determines if the time of day is in the morning, mid-day, or afternoon
	// Next we'll want to make something in our Sale_Day struct to add up all the morning, mid-day, and afternoon purchases
	cout << "Total amount spent in the morning = " << today.tot_price_morn() << "\n";
	cout << "Total amount spent in the mid-day = " << today.tot_price_mid() << "\n";
	cout << "Total amount spend in the afternoon = " << today.tot_price_after() << "\n";
	// WOOHOO now we have finished the first task - we know that the most money was spent in the afternoon (technically, this is just because we made the afternoon the biggest window here but shhh)
	
	/* Second task: figure out which fruit is the most popular
	We want to add up how much each of the different kinds of fruit was purchased and then compare them
	*/
	// Unfortunately, in a single purchase, there could be multiple instances of each fruit, so lets make a function in our purchase struct that gives us the amount of each fruit
	// Now that we have our function in Purchase, lets make a function in Sales_Day that adds up the number of each fruit from each purchase
	today.compute_tots();
	cout << "Apple: " << today.num_apple << " Pear: " << today.num_pear << " Orange: " << today.num_orange << " Grape: " << today.num_grape << " Cherry: " << today.num_cherry << " Mango: " << today.num_mango << "\n";
	// WOOOOOO the second task is done!!!

	return 0;
}
