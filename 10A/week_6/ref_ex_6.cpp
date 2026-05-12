/*
Here is some code to try to find all the occurances of certain numbers inside the first 1000000 or so digits of pi, by reading those digits from a file
There are 2 tasks to do
    1. Explain whats happening in the code; how exactly is the code working to find the occurances of the number in the digits of pi?
    2. Made modifications to speed up the code. Hint: the find function taks a second argument which tells it to start looking only after a certain index. So find(s1, 10) would only look for s1 after and including index 10
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
    while (!stop) {
        string num_str = to_string(num);
        // idx = part.find(to_string(num));
        idx = pi.find(to_string(num), idx);
        // cout << idx << "\n";
        if (idx == string::npos) {
            // stop = true;
            break;
        } else {
            idx += num_str.length();
            // part = part.substr(idx, part.length() - idx);
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
    // cout << number_occurances(dig, ) << "\n";
    string test = "1234544444";
    // cout << number_occurances(test, 4);
    const int N = 1000;
    for (int i=0; i < N; ++i) {
        cout << i << " = " << number_occurances(dig, i) << "\n";
    }
    return 0;
}
