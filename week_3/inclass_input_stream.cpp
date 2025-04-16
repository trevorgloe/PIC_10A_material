// The input stream

#include <iostream>
#include <string>

using namespace std;

int main() {
    // we already know how to use the streams like
    string fruit1;
    string fruit2;
    cout << "Please enter two fruits " << "\n";
    cin >> fruit1 >> fruit2;
    cout << "Your fruits: " << fruit1 << " and " << fruit2 << "\n";

    // what about this?
    string veggie1;
    string veggie2;
    cout << "Please enter two veggies " << "\n";
    cin >> veggie1;
    cout << "What about the second?" << "\n";
    cin >> veggie2;
    cout << "The two veggies are " << veggie1 << veggie2 << "\n";
    return 0;
}
