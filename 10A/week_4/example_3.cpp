#include<iostream>
#include<string>

/*
What is the output of the following code?
*/

using namespace std;

int main() {
    char f = 'f';
    int p = 4;
    string s;
    for (int i = p; i < p*p; i+=2) {
        s.push_back(f);
        if (i%3==0) {
            char f = 'r';
            s.pop_back();
            s.push_back(f);
        }
    }
    cout << s << '\n';

    return 0;
}
