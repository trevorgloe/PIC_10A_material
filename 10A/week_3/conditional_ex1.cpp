#include<iostream>
#include<string>

/*
Lets make a program that prints out how long until an appointment at 2pm

The user inputs the time of day, 2 numbers separated by a colon, followed by a space, followed by "am" or "pm"
You can assume the minutes is always specified with 2 digits (so like 4:32, or 11:01)
*/

using namespace std;

int main() {
    cout << "What time is it\n";
    // 1: get user input and create ints for hr and minute 
    // user input WILL be like
    // 11:22 am
    string input;
    string input2;
    cin >> input >> input2;
    // getline(cin, input);
    size_t colon_idx = input.find(':');
    // stoi - string to int
    int hr = stoi(input.substr(0,colon_idx));
    int min = stoi(input.substr(colon_idx+1, 2));



    // print out how many hours and minutes until 2:00pm
    return 0;
}
