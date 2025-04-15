/* 
* A more detailed explaination of the input buffer in c++
*
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    // we already know that we can get a users input when they enter two words separated like so
    string fruit1;
    string fruit2;
    cout << "Please enter two fruits: " << "\n";
    cin >> fruit1 >> fruit2;
    cout << "Your fruits: " << fruit1 << " and " << fruit2 << "\n";

    // but what about 
    string veggie1;
    string veggie2;
    cout << "Please enter two vegitables " << "\n";
    cin >> veggie1;
    cout << "That first one is good, what about the second?" << "\n";
    cin >> veggie2;
    cout << "Ok the two vegitables are " << veggie1 << " and " << veggie2 << "\n";

    // now whats really happening here? Well, cin kinda covers up some stuff behind the scenes, namely the "input buffer"
    // when we type something into the console, the characters are stored in the input buffer until a function like cin can take it and do something with it
    // cin will read the characters in the input buffer, take as many as it can, and then stop
    // a whitespace tells it to stop, so a single call of cin will take up to the first whitespace
    // the second time I'm calling cin, it does not prompt the user for input because there is already stuff in the input buffer so it just takes that (namely "lettuce")
    // we can change how much cin is "able to take" by changing the variable type its writting to
    // the cout and cin's that we're calling are actually called streams, which are their own class and have their own member functions. We can pass them around like variables
    // there are other streams that we can create, but we will not go into that in this class
    int i;
    cout << "write some stuff" << "\n"; // put these string literals into the output stream
    // you might think "why does c++ need to do all this fancy stuff with streams, why can't it just sequentially (in serial) read and write the stuff in the console
    // the main reason is because we may not want our input or output to be from the console and streams give us a more general framework for input/output; basically the syntax for writting something to a file vs. the console will be almost the same, which will be very nice when we start learning about classes
    cin >> i;
    cout << "I got this integer " << i << "\n";
    cout << cin.fail() << "\n"; // WARNING: If cin is in a fail state NONE of the functions will do what you expect, so stay out of this state

    return 0;
}

