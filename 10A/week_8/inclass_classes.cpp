// Classes

#include <iostream>
#include <string>

using namespace std;

// its convension to capitalize the name of classes
class Person {
    string name;
    int age;
    float height; // in inches

    float ft_in_to_in(int ft, float in) {
        return 12*ft + in;
    }

public: 
    Person(string _name, int _age, float _height) : name(_name), age(_age), height(_height) {
        cout << "Created a person" << "\n";
    }
    Person(string _name, int _age, int height_ft, float height_in) : name(_name), age(_age) {
        cout << "Created a person with height and feet separately" << "\n";
        height = ft_in_to_in(height_ft, height_in);
    }

    int height_feet() {
        return static_cast<int>(height /12.0);
    }
    void birthday() {
        cout << "Happy birthday!" << "\n";
        age++;
    }
    int give_age() {
        return age;
    }

};

int main() {
    Person trevor("Trevor", 24, 66);
    // cout << trevor.age << "\n";
    cout << trevor.height_feet() << "\n";
    trevor.birthday();
    cout << trevor.give_age() << "\n";

    // alternative constructor
    Person trevor2("Trevor", 24, 5, 6.5);
    cout << trevor.height_feet() << "\n";
    return 0;
}
