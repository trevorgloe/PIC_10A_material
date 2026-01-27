#include<iostream>
#include<vector>

class TimeSeries {
	friend std::ostream& operator<<(std::ostream& out, TimeSeries ts);
private:
	// array to store the actual data in the time series
	std::vector<float> data;
	// an array to store the time values
	std::vector<float> time;
	// time step
	float time_step;
	float start_time;

	// moving average
	std::vector<float> mov_avg;
	int mov_avg_window;
	// overall average
	float avg;
	
	void add_to_mov_avg(float next); // add the next element to the moving average, using equal weights as far back as mov_avg_window
public:
	// constructor
	TimeSeries(float time_step_, float start_time_=0.0, int mov_avg_win=1);
	// overload ++ operator
	TimeSeries& operator+=(float next);

	// return avg
	float get_avg();

	// return mov_avg
	std::vector<float> get_mov_avg();
};

std::ostream& operator<<(std::ostream& out, TimeSeries ts);
