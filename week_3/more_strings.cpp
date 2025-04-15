/* 
* A bit more about strings in C++
*
*/

#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main() {
    // creating a string
    // generally, we're gonna have 3 ways to create a string that each are important for different reasons
    // 1. traditional variable initialization
    string s = "Go stupid"; // the syntax we're used to 
    cout << s << "\n"; 

    // 2. Class constructor
    string t("Go crazy");
    // why "constructor"? well it turns out a string is a type of thing called a class, and to create a class, a common way to do it is using a special function called a constructor. A class is just a special data type that has its own functions, and the constructor is just the special way to create an "instance" of the class
    cout << t << "\n";

    // 3. Alternative constructor
    string r(4, 'a'); // this makes 4 copies of the char 'a'
    cout << r << "\n";

    // there is technically another way to construct a string, the default constuction
    string u;
    // basically this is like an uninitialized variable, except that its actually not, its just a special kind of string that has no characteris in it
    // trying to use it doesn't give undefined behavior like a regular variable
    cout << u << "\n";
    // this is another cool thing about class

    // string member functions
    // strings have a bunch of functions they come with that makes working with them fairly easy
    cout << s.length() << "\n"; // get the length of the string
    cout << s.at(4) << "\n"; // get the char at a specific location of the string
    // we can check that is is actually giving us a char
    cout << "s.at(4) is type " << typeid(s.at(4)).name() << "\n"; // c is for char!
    // remember do not use [] for getting elements of the string if you can, as this is not memory safe!
    // what if we do s.at(10)?
    // cout << s.at(10) << "\n"; // runtime error!
    cout << s.substr(3, 8) << "\n"; // get the characters from 3 to 8
    cout << s.find("Go") << "\n"; // finds the first instance of "Go" from left to right
    cout << t.rfind("zy") << "\n"; // find the first instance of cra from right to left (not that the index is still measured from left to right)
    // cout << t.push_back('!') << "\n"; // will not work because this needs to be asigned to a variable (memory reasons)
    t.push_back('!');
    cout << t << "\n"; // puts a char at the end of the string
    t.erase(3, 9);
    cout << t << "\n"; // erases characters from first index to second index
    
    // practice!
    // what is the output here? 
    string new_s = "Inertia is a property of matter";
    cout << new_s.find('i', 6) << "\n"; 
    // when we put the int in the second argument, the find function searches only the characters after 6
    
    // predict the output 
    string sub_new_s = new_s.substr(13, 8);
    sub_new_s.pop_back();
    sub_new_s.push_back('e');
    cout << sub_new_s << "\n";


    return 0;
}
    
