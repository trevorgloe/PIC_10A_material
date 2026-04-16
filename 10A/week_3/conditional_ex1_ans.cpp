#include<iostream>
#include<string>

/*
Lets make a program that prints out how long until an appointment at 2pm

The user inputs the time of day, 2 numbers separated by a colon, followed by a space, followed by "am" or "pm"
*/

using namespace std;

int main() {
    cout << "What time is it? ";

    string meridiem;
    string tstring;
    cin >> tstring >> meridiem;

    size_t colon_idx = tstring.find(':');
    int hr = stoi(tstring.substr(0, colon_idx+1));
    int min = stoi(tstring.substr(colon_idx+1, 2));
    // cout << hr << " " << min << " " << meridiem << "\n";
    int delta_hr = 0;
    int delta_min = 0;

    if (min == 0) {
        if (meridiem.find("am") != string::npos) {
            // time in am, so find how long until noon, and add 2
            delta_hr = (12 - hr) + 2;
        } else {
            // time in pm so find how long until 2
            delta_hr = 2 - hr;
        }
    } else {
        // do the same thing but find how long until 1, then find how many minutes until the next hour
        if (meridiem.find("am") != string::npos) {
            // time in am, so find how long until noon, and add 1
            delta_hr = (12 - hr) + 1;
            delta_min = 60 - min;
        } else {
            // time in pm so find how long until 1
            delta_hr = 1 - hr;
            delta_min = 60 - min;
        }
    }

    // not required: print different message if its already past 2
    if (delta_hr < 0) {
        cout << "The appointment at 2pm has already passed!\n";
    } else {
        cout << "You have " << delta_hr << " hours and " << delta_min << " minutes until the appointment as 2pm\n";
    }
    return 0;
}
