// Strings in C++
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    // char
    char c = 'c';
    cout << c << "\n";

    // weird asignment
    char a = 71;
    cout << a << "\n";
    // a char is really just a number to the computer, that it knows to interpret as a letter
    // the ASCII table determines which number is which letter
    c++;
    cout << c << "\n";

    // strings are not native to c++
    string s = "Burger";
    cout << s << "\n";

    // we can access the individual characters
    // using the .at function
    cout << s.at(0) << "\n";
    // another way
    cout << s[0] << "\n";
    // WARNING: the .at function will error if we tried to do .at(1000), but s[1000] would not
    // 
    // certain languages (such as Rust) market themselves as "memory safe" 
    //
    // common mistake (concatenate string literals)
    // in general we can concatenate two strings with the + operator
    string first = "John";
    string last = "Cena";
    string full = first+" "+last;
    cout << full << "\n";

    // string new_name = "Adam" + " Ondra";
    //
    // How to get input from the console
    // this is done with the cin function
    string input; // declare a string
    cin >> input;
    cout << "You just said " << input << "\n";
    // if we have two words separated by a space, it actually just takes the first one
    // this can be fixed by using two variables
    string first_word;
    string second_word;
    cin >> first_word >> second_word;
    cout << first_word << " " << second_word << "\n";

    return 0;
}
