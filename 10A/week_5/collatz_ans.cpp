#include<iostream>
/*
The Collatz conjecture is one of the most famous unsolved problems in mathematics
It states that if you evolve an integer according to a simple rule, it will always go to 1, for any starting integer
The rule is 
    1. If the number is even, divide by 2
    2. If the number is odd, multiply by 3 and add 1

Lets try it!
*/
using namespace std;

int main() {
    const int start = 220030020;
    int num = start;
    int cnt = 0;
    while (num != 1) {
        if (num%2 == 0) {
            num = num /2;
        } else {
            num = num*3 + 1;
        }
        cnt++;
    }
    // print out how many steps it took in the end
    cout << start << " took " << cnt << " iterations\n";
    return 0;
}
