#include<iostream>
#include<fstream>
#include<string>

using namespace std;

string convert_names(string s, string newname) {
    bool stop = false;
    string newstring;
    size_t idx = 0;
    string sub = s;
    while (!stop) {
        idx = sub.find("Bennet");
        // cout << idx << "\n";
        if (idx == string::npos) {
            stop = true;
        }
        newstring += sub.substr(0, idx);
        if (idx != string::npos) {
            newstring += newname;
            // cout << sub << "\n";
            string temp = sub.substr(idx + 6, sub.length() - idx - 6);
            sub = temp;
        }
    }
    return newstring;
}
int main() {
    // open file
    ifstream file("pride_and_prejudice.txt");
    
    // cout << convert_names("My name is Bennet", "Trevor") << "\n";
    ofstream out("new_pride_and_prejudice.txt");
    string line;
    while (getline(file, line)) {
        out << convert_names(line, "Loe") << "\n";
    }
    return 0;
}

