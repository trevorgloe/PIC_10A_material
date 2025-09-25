// a bit more on strings
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    // creating a string
    // 3 ways:
    // 1. traditional variable initialization
    string s = "Something";
    cout << s << "\n";

    // 2. Class constructor
    string t("Another thing");
    cout << t << "\n";
    // t is an instance of the class "string"

    // 3. Alternative constructor
    string r(4, 'a'); // makes 4 copies of a
    cout << r << "\n";

    // technically, we can make a string like this
    string u;
    cout << u << "\n";

    // string member functions
    cout << s.length() << "\n"; // lenght of string
    cout << s.at(4) << "\n"; // get the char at the location provided

    cout << s.substr(3,4) << "\n";
    cout << s.find("me") << "\n";
    string s2 = "Another string another string";
    cout << s2.rfind("string") << "\n";
    cout << s2.find("string") << "\n";

    t.push_back('!');
    cout << t << "\n";
    // this type of manipulation can be done because strings are "mutable"
    t.erase(3, 9);
    cout << t << "\n";
    // cout << t.push_back('a') << "\n";

    // practice!
    // what is the output
    string new_s = "Initia is a property of matter";
    cout << new_s.find('i', 6) << "\n";

    // predict this output
    string sub_new_s = new_s.substr(13, 8);
    sub_new_s.pop_back();
    sub_new_s.push_back('e');
    cout << sub_new_s << "\n";

    return 0;
}
