#include<iostream>
#include<vector>
#include"ts_1A.hpp"

TimeSeries::TimeSeries(float time_step_, float start_time_, int mov_avg_win) : time_step(time_step_), start_time(start_time_), mov_avg_window(mov_avg_win) { }

TimeSeries& TimeSeries::operator+=(float next) {
	// add the data
	if (time.size() == 0) {
		time.push_back(start_time);
	} else {
		time.push_back(time[time.size() - 1] + time_step);
	}
	data.push_back(next);
	
	// update the average
	float temp = avg * (time.size() - 1);
	avg = (temp + next) / time.size();

	// update the moving average
	add_to_mov_avg(next);
	return *this;
}

float TimeSeries::get_avg() {
	return avg;
}

std::vector<float> TimeSeries::get_mov_avg() {
	return mov_avg;
}

void TimeSeries::add_to_mov_avg(float next) {
	float tot = 0.0;
	if (data.size() < mov_avg_window) {
		mov_avg.push_back(next);
	} else {
		for (int i=0; i<mov_avg_window; ++i) {
			tot += data.at(data.size() - 1 - i);
			// data[data.size() - 1 - i]		
		}
		mov_avg.push_back(tot / mov_avg_window);
	}
}

std::ostream& operator<<(std::ostream& out, TimeSeries ts) {
	out << "Time Series ranging from " << ts.time.at(0) << " to " << ts.time.at(ts.time.size() - 1) << "\n";
	out << "With data \n";
	for (int i=0; i < ts.data.size(); ++i) {
		out << ts.data.at(i) << " ";
	}
	out << "\n";
	return out;
}
