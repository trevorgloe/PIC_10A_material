// Let me just say a little bit about classes

#include <iostream>
#include <string>

using namespace std;

// the typical convension is to capitalize the name of a class
class Person {
    // these member variables would be private by default, but we can specify to be extra clear
    // these are called "access specifiers"
    private:
        string name;
        int age;
        float height; // in inches
       
        // convert ft and inches to just inches
        float ft_in_to_int(int ft, float in) {
            return 12*ft + in;
        }

    public:
        Person(string _name, int _age, float _height) : name(_name), age(_age), height(_height) { 
            cout << "Created a person" << "\n";
        }
        Person(string _name, int _age, int height_ft, float height_in) : name(_name), age(_age) {
            cout << "Creating a person with height in two numbers" << "\n";
            height = ft_in_to_int(height_ft, height_in);
        }
    
        
        void birthday() {
            cout << "Happy birthday!" << "\n";
            age++;
        }
        int height_feet() {
            return static_cast<int>(height / 12.0);
        }
        int give_age() {
            return age;
        }
};

int main() {
    // Classes are the more C++ style way of doing things that we've seen with structs
    // It'll hold, just like before, both member variables and member functions
    Person trevor("Trevor", 24, 66);
    cout << trevor.height_feet() << "\n";
    // since this is a class, we can't just directly access the age member variable
    // So we need a public function that will return it
    trevor.birthday();
    cout << trevor.give_age() << "\n";

    // we can also make member functions private
    Person trevor2("Trevor", 24, 5, 6.5);
    cout << trevor.height_feet() << "\n";
    // so we can make member functiosn private which means only other member functions will have access to all of them

    // You might be inclined to ask: why do we do all this, why not just make all the member variables public so we can just mess with them ourselves
    // Well, let me give you a real life example
    // In modern cars, all the acceration is done through computers, small computers called microcontrollers. Those microcontrollers have their code written almost all in C++
    // Cars are very complicated and there are many different microcontrollers, each having very long complicated code they have to execute. So there are a lot of different people all working on the same codebase
    // In the 1990s and early 2000s there started to be errors and people died
    // So engineers moved to develop a standard called MISRA C (Motor Industry Software Reliability Association) this was for C but later is was also done for C++
    // It is now used for many more industry than just automotive as well
    // Something that is emphacized in these standards is this idea that no other part of the code should have access to any variables or functions that it doesn't need direct access to
    // Otherwise, you could accidentally have a typo and change a member variable that might be really important later
    // So there are real-world reasons to do weird stuff like this, beyond just looking pretty
    //
    // This also comes back to ANOTHER of the 4 fundamentals of OOP: Encapsulation
    // Encapsulation is exactly what we are doing above when we hide the member variables and only allow an outside user to access them in a very specific way
    // When we bundle up the data defining an object with the member functions that define how it works (typically inside a class), this is encapsulation
    // The access modifiers we specify (private, public, etc.) allow us to encapsulate the raw data of our objects and shield them from accidentally being manipulated
    // Relation to abstraction: when do do encapsulation well, it leaves to abstraction, which means we can think about the program in terms of the over-arching data objects without having to understand the nitty-gritty all the way down
    // Abstraction is really something about the design of the program and philosophy with which it is written and used, it does not require encapsulation to be done, but often goes hand in hand, especially in C++
    // Encapsulation is about what you are actually doing to organize your data and functions

    return 0;
}
