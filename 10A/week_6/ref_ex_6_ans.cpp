/*
Here is some code to try to find all the occurances of certain numbers inside the first 1000000 or so digits of pi, by reading those digits from a file

*/

#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int number_occurances(string& pi, int num) {
    int tot = 0;
    bool stop = false;
    size_t idx = 0;
    // string part = pi;
    string num_str = to_string(num);
    // cout << num_str << "\n";
    while (!stop) {
        // cout << "idx=" << idx << "\n";
        // string num_str = to_string(num);
        size_t add = pi.find(num_str, idx);
        // cout << "add=" << add << "\n";
        // idx += pi.find(num_str, idx);
        // cout << idx << "\n";
        if (add == string::npos) {
            stop = true;
        } else {
            idx = add;
            idx += num_str.length();
            tot++;
        }
    }
    return tot;
}
int main() {
    ifstream file("digits_pi.txt");
    string dig;
    getline(file, dig);
    // cout << dig << "\n";
    // string test = "1234432144444";
    // cout << number_occurances(dig, 4) << "\n";
    const int N = 1000;
    for (int i=0; i < N; ++i) {
        cout << i << " = " << number_occurances(dig, i) << "\n";
    }
    return 0;
}
