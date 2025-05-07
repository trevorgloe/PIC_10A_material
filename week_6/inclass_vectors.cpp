// Vectors!

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // vectors are variable-sized containers for whatever data type you like
    // they are a "class template"
    vector<int> v;
    vector<double> w;
    int a = 1;

    // some of the same member functions as strings
    v.push_back(1);
    v.push_back(2);
    v.pop_back(); // removes last element
    w.push_back(22.1);

    cout << v.at(0) << "\n";
    cout << w.at(0) << "\n";
    // WARNING: doing pop_back() on an empty vector will produce undefined behavior or a runtime error

    // alternative constructors
    vector<string> words = {"Today", "is", "gonna", "be"};
    cout << words.at(2) << "\n";
    vector<int> many_zeros(10, 0); // make 10 copies of the int 0
    cout << many_zeros.at(9) << "\n";

    // another useful function, resize
    many_zeros.resize(3); // makes the vector size 3
    cout << many_zeros.size() << "\n";
    many_zeros.resize(6, 2); // make the vector size 6 and fill the new spaces with 2
    cout << many_zeros.at(4) << "\n";

    // Vector memory management
    vector<int> new_v;
    int num;
    cout << "Enter the number of 7s you wants" << "\n";
    cin >> num;
    for (int i=0; i < num; i++) {
        new_v.push_back(7);
    }
    cout << "The new vector is size " << new_v.size() << "\n";

    cout << "The space for the new vector is " << new_v.capacity() << "\n";
    new_v.shrink_to_fit();
    cout << new_v.capacity() << "\n";
    return 0;
}
