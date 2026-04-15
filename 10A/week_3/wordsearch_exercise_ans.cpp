#include<iostream>
#include<string>
#include<fstream>

/*
NASA 42 is an open source orbital and rigid body dynamics simulation, written mainly by Eric Stoneking. The simulation uses text files to configure settings for a simulation run. Lets make a piece of code that parses a file and finds the inclination set
*/

using namespace std;

int main() {
    // this is the code to read in the file, with the exception of the while loop, all of these should be familiar
    ifstream file("nasa42/Orb_L3.txt");
    string str;
    string contents;

    while(getline(file, str)) {
        contents += str;
        contents.push_back('\n');
    }
    // cout << contents << "\n";
    
    size_t idx = contents.find("Inclination");
    // cout << idx << "\n";
    string val_str = contents.substr(idx-33, 10);
    float val = stof(val_str);
    // cout << val_str << "\n";
    // cout << val << "\n";
    cout << "Inclination has a value of " << val << " degrees\n";
    cout << "or " << val * 3.141593 / 180.0 << " radians\n";
    // now we want find the word "Inclination" and figure out the numerical value thats in front of it
    return 0;
}
