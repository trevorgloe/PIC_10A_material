// Lets make a program for a data science application
// Setup: suppose you are working for a grocery store selling fruit, and they want to know some analytics about how the fruit has been selling
// specifically they want to know what time of day the most sales happen, what the most popular fruit is, and who bought the most fruit
// They give you a big text file with over a hundred names of people, what they purchased, what time of day, and how much they spent

#include <iostream>
#include <fstream>
#include <string>
#include "purchase.hpp"

using namespace std;

int main() {
	

	// not required that you know how to do this for this class but helpful - heres how you would read data from a file
	// Notice that this is another example of a "stream" justlike we have the input stream with cin and cout
	// vector<Purchase> all_purchases;
	// ifstream MyReadFile("fruit_data.txt");
	// string line;
	// while (getline (MyReadFile, line)) {
	//   // Output the text from the file
	// 	// format the data from the line into the necessary information
	// 	size_t pos1 = line.find(';');
	// 	string name = line.substr(0, pos1);
	// 	cout << name << "\n";
	// 	// get all the fruits
	// 	vector<string> this_fruits;
	// 	bool colon_flag = false;	
	// 	while (!colon_flag) {
	// 		int first_comma = line.find(',', pos1+1);
	// 		int first_colon = line.find(':', pos1+1);
	// 		// cout << "first comma is " << first_comma << "first colon is " << first_colon << "\n";
	// 		if (first_comma > first_colon) {
	// 			colon_flag = true;
	// 		} else {
	// 			string new_fruit = line.substr(pos1+1, first_comma - pos1 - 1);
	// 			this_fruits.push_back(new_fruit);
	// 			pos1 = first_comma;
	// 			cout << new_fruit << "\n";
	// 		}
	// 	}
	// 	// next get the price
	// 	// cout << line.substr(pos1) << "\n";
	// 	size_t pos2 = line.find(':', pos1+1);
	// 	size_t pos3 = line.find(',', pos2);
	// 	// cout << "pos2 is " << pos2 << " and pos3 is " << pos3 << "\n";
	// 	string price_str = line.substr(pos2+1, pos3 - pos2);
	// 	// cout << price_str << "\n";
	// 	float this_price = stof(price_str);
	// 	cout << this_price << "\n";
	// 	// finally get the time in two ints
	// 	pos1 = line.find(',', pos2);
	// 	// cout << line.substr(pos1) << "\n";
	// 	int pos4 = line.find(':', pos1);
	// 	string hour_str = line.substr(pos1+1, pos4 - pos1);
	// 	string min_str = line.substr(pos4+1);
	// 	// cout << hour_str << "\n";
	// 	// cout << min_str << "\n";
	// 	int this_hour = stoi(hour_str);
	// 	int this_min = stoi(min_str);
	// 	cout << "Time is " << this_hour << ":" << this_min << "\n";
	//
	// 	// then create the struct 
	// 	Purchase this_purchase(name, this_fruits, this_price, this_hour, this_min);
	// 	all_purchases.push_back(this_purchase);
	// }
	// cout << all_purchases[20].name << "\n";
	// cout << all_purchases[20].price << "\n";
	// cout << all_purchases[149].name << "\n";
	// cout << all_purchases[149].minute << "\n";
	//


	return 0;
}
