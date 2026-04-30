#include<iostream>
/*
Lets make a function that counts how many prime numbers are less than a given x
Recall that a number p is prime is the only numbers dividing p are 1 and p
Some examples of primes: 2, 3, 5, 7, 11, 13
This is a classic exercise in programming
*/

int primes_below(int n) {

    return 0;
}

// returns true if k is prime
bool is_prime(int k) {
    // bool isp = true;
    for (int i=2; i < k; i++) {
        if (k%i==0) {
            // isp = false;
            return false;
        }
    }
    return true;
}

int main() {
    
    int n = 2048;
    std::cout << "There are " << primes_below(n) << " primes less than " << n << "\n";
    return 0;
}
