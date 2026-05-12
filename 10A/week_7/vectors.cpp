// The std::vector class

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // vectors are variable-sized containers of whatever type of data we give to them
    // they are known as a "class template" because they actually can be a lot of different classes depending on the data type they hold
    vector<int> v;
    vector<double> w; // these are two different classes, but both the same class template
 
    // we have a lot of the same member functions that we did for strings
    v.push_back(4);
    v.push_back(2);
    v.pop_back(); // WARNING: doing pop_back() on an empty vector will give undefined behavior (or potentially a runtime error) it gives a runtime error (segmentation fault) for me
    w.push_back(23.23);

    // and we can access all the data in these vectors the same way
    cout << v.at(0) << "\n";
    cout << w.at(0) << "\n";

    // alternative constructor (not default)
    vector<string> words = {"Today", "is", "gonna", "be", "the", "day"};
    cout << words.at(2) << "\n";

    // alternative alterivative constructor
    vector<int> many_zero(10, 0);
    cout << many_zero.at(9) << "\n";

    // another useful function, resize
    many_zero.resize(3); // make the vector now size 3
    cout << many_zero.size() << "\n";
    many_zero.resize(6, 2); // make the vector size 6 and fill the new spots with 2
    cout << many_zero.at(4) << "\n";

    // Vector memory management
    // This is a tad beyond the scope of this class, but if you're interested, vectors do some somewhat complicated things when it comes to managementing memory
    // Before, I said that when you declare and define a variable, the computer allocates a section of memory that it knows will be big enough to store the size of that data
    // well how can it do this with a vector?
    // You might think that the compiler just looks at your code and figures it out when compiling by the largest size the vector should ever get, but what about this?
    vector<int> new_v;
    int num;
    cout << "Enter the number of 7s in the vector" << "\n";
    cin >> num;
    for (int i=0; i < num; i++) {
        new_v.push_back(7);
    }
    cout << "New vector is size " << new_v.size() << "\n";
    // in this case there is NO way the compiler can figure out what is gonna be the required memory for the vector, so it has to allocated dynamically
    // To understand this you need to understand that c++ has two types of memory that it works with: 
    // The stack: this is where all the "scopes" we've been dealing with have been living (with some exceptions) - when you make a new scope, it lives in the stack
    // the stack operates on a principal called "Last-in, first-out" which means the last thing you put in is the FIRST thing you can take out
    // it is usually visualized as something like a stack (see what they did there) of pancakes, where you add a pancake on top, and then take a pancake off the top (draw picture)
    // When we open up a new scope, that data is allocated on the top of the stack, then we we want to access data, this is why the compiler will prioritize things in the "inner"-most scope
    // Note that "the stack" that I'm talking about here is not exactly the same as a "stack" data type because you CAN access data in other scopes while in an inner scope, this really is more just how the memory is allocated
    //
    // The heap: the heap does not have the restrictions of the stack, random blocks of memory are just allocated and pulled from whenever 
    // when your program is doing dynamic memory allocated, as with vectors, this is happening on the heap
    // so when we create a vector it picks a spot in the heap, and when we start adding to it, it will allocated a chunk of memory that it thinks is the smallest size it would reasonably need
    cout << new_v.capacity() << "\n"; // this is the size of the memory allocated for it currently
    // if we want to manually make the size smaller, we can actually do that with the shrink_to_fit() function
    new_v.pop_back();
    new_v.pop_back();
    new_v.shrink_to_fit();
    cout << new_v.capacity() << "\n";
    // the compiler may sometimes do this automatically, I'm not actually sure

    return 0;
}
