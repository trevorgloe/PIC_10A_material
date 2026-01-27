#include<iostream>
#include<vector>
#include"time_series.hpp"

TimeSeries::TimeSeries(float time_step_, float start_time_, int mov_avg_win) : time_step(time_step_), start_time(start_time_), mov_avg_window(mov_avg_win) { }

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
		}
		mov_avg.push_back(tot / mov_avg_window);
	}
}
