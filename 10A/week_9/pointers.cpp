// POINTERS WOOOOO

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Lets talk about POINTERS
    // pointers are infamously in C++ for being super complicated, so I will try my best to somewhat demystify them
    // But do not be discouraged if they're hard to understand, everybody is confused by them
    // I'm not sure if the professor drew these pictures for you, but I will because I think they're helpful
    // We can think of the RAM (make sure people know what RAM is) on your computer as just a line of memory
    // Note: we talked about the stack vs the heap, lets ignore that and move to a higher level of abstraction for now
    int a = 13; // this created an integer at whatever location in the RAM the computer deemed best
    int* pa = &a; // this is a variable that stores the address of a
    cout << "variable a has value " << a << " and is stored at " << pa << "\n";
    // note that the pointer will be a hexidecimal address
    // syntax note
    // both int* pa and int *pa work
    // people typically put the * on the data type because it is specifying the data type but both will work
    // to me it makes wayyyy more sense to put it on the data type
    // derefercing operator (give me the data at that address)
    cout << "the data at pa is " << *pa << "\n";
    // one thing thats slightly confusing is that *pa actually gives you a reference type, not an int but its effectively the same as just getting the int
    // NULLPTR
    // if we don't initialize a pointer, as with any native data type, it will start off with a random value
    int* p2;
    cout << "before initialization: " << p2 << "\n";
    // we don't know what this segment of memory is, so we typically don't want to do this
    // to avoid it, we initialize a pointer to be null
    p2 = nullptr; 
    cout << "null initialization: " << p2 << "\n";

    // const pointer vs pointer to const
    int b = 42;
    // This, imo is one of the most confusing parts of pointers
    int* const p3 = &b; // const pointer to an int
    const int* p4; // pointer to const int
    const int* const p5 = &b; // const pointer to const int
    // a const pointer makes the POINTER constant, meaning that you can't change the address after initialization
    // a pointer to const works like a reference to const, where the pointer treats the data it points to as a constant
    p4 = &b;
    // *p4 += 4; // this is not allowed because p4 thinks that the data it points to is constant

    // using pointers with functions (show example_1.cpp)

    // example problem (show example_2.cpp)

    // what are pointers really good for most of the time? 
    // well theres a lot of things they are used for, most as efficient ways to give different parts of the code access to data
    // heres another way they're useful: pointer arithmetic
    bool my_bools[10] = {}; // array of bools (all false)
    my_bools[3] = true;
    // now I know that the array stores all the elements in array successively in memory
    bool* boolp = &my_bools[0]; // this points to the first element
    // we can increment the pointer to get the next bool in the memory (successively)
    cout << *boolp << "\n";
    boolp++;
    boolp++;
    boolp++;
    cout << *boolp << "\n"; // now boolp points to the third element of the array (could have also done with with boolp += 3)
    // when we do boolp++ it does boolp + 1*(size of bool)
    cout << boolp << "\n";
    boolp++;
    cout << boolp << "\n"; // only 1 byte is used to store a bool, so the address increases by 1
    // This kind of thing can be useful because access memory that is "far away" is usually not very efficient and will slow things down. This pointer arithmetic gives us total control of how far away the memory we access is

    // extra thing: how the stack and the heap's memory addresses work
    // lets look at an example of something we know is on the heap
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    int* vp = &v[0]; // should be somewhere on the heap
    double my_double = 1.45;
    double* pmy_double = &my_double; // should be somewhere on the stack
    cout << "heap variable is at " << vp << "\n";
    cout << "stack variable is at " << pmy_double << "\n";
    // ok so the variable on the stack has a much higher memory address (show picture)
    // so the stack "grows down" until it is stocked by the program (stack overflow) and the heap "grows up". There is no limit to how high up the heap can grow except the allocated memory for the program
    return 0;
}
