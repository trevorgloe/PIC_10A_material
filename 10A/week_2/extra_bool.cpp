/* 
* A bit extra on bools that I didn't mention before
*
*/

#include <iostream>

using namespace std;

int main() {
    // a tad more about bools and using them
    // cout << boolalpha;
    // we can define a bool using a condition like equality or less than/ greater than
    int a = 3;
    bool a_is_three = (a==3);
    cout << "a is 3? " << a_is_three << "\n";

    // We can also combine bools using * (for and) and + (for or)
    bool t = true;
    bool f = false;
    bool s = true;
    cout << t*s << "\n";
    cout << t*f << "\n";
    cout << t+f << "\n";
    cout << t+s << "\n"; // this is why you should be careful in using * and +

    // alternatively we can use && for and and || for or
    // preface: this is NOT what you should do currently in the course, as the instructor wants you to do it the other way, but you might see this online so its good to know currently
    // this is the more common way to combine bools
    bool t_and_s = t&&s;
    cout << t_and_s << "\n";
    bool t_and_f = t&&f;
    cout << t_and_f << "\n";
    bool t_or_f = t||f;
    cout << t_or_f << "\n";
    bool t_or_s = t||s;
    cout << t_or_s << "\n"; 

    // example: predict the output
    int b = 42;
    bool e1 = (b > 42) * (a > 42);
    cout << e1 << "\n";

    // heres a classic
    bool e2 = ( ( b % 2 == 0) + ( a % 2 == 0) ) * (a + b < 50 );
    // I don't reccomend doing this complicated nested conditional operators when you can avoid it
    cout << e2 << "\n";

    // heres a particularly annoying example
    bool new_t_s = t + s;
    cout << (t + s == new_t_s) << "\n";
    // whats happening here? well when we do t + s, that is getting cast to an int. The first line we cast this back to a bool which goes to true (as anything other than 1 goes to true), but when we use the equality operator, it cast new_t_s to an int and compares them as ints
 
    return 0;
}
