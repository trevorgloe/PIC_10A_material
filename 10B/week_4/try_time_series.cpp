#include<iostream>
#include"time_series.hpp"

using namespace std;

int main() {
	/* Time series analysis! 
	Time series analysis is based on recording your data at regular time intervals, and storing that data so you can do statistical analysis on it
	This method of data analysis is widely used in financial math, as well as remote sensing, health care, and any situation in which you have a continuous stream of data coming in that you want to be able to analyze in real-time

	A very important technique in time series analysis is the moving-average
	This is a way to essentially "smooth" your data by taking the average of the last few entries
	Unless a regular average, it will change over time (just slower than the actual data)
	*/


	TimeSeries ts(0.1, 0.0, 2); // This is a TimeSeries class that I created, and we are going to overload 2 functions: += and <<
	for (int i = 0; i< 20; ++i) {
		ts+= 1 / static_cast<float>(i+1);
		cout << ts.get_avg() << "\n";
	}
	cout << ts;

	vector<float> v = ts.get_mov_avg();
	for (int j = 0; j < 20; ++j) {
		cout << v.at(j) << " ";
	}
	cout << "\n";
}
