// C-style arrays

#include <iostream>
#include <cmath>

using namespace std;

void print(double arr[], const int arr_size) {
    // loop through and print out all the elements
    for (int i = 0; i < arr_size; i++) {
         cout << arr[i] << "\n";
    }
}

void edit(double arr[]) {
    arr[0]++;
}

int main() {
    // arrays are another way to hold a bunch of objects together
    // They are sort of the pre-cursor to vectors, which we typically use now, but they can occasionally have their uses
    // They are called C-style because in C, there are no vectors, so if you want a container of a bunch of objects, its gotta be one of these guys

    // to create an array we need two pieces of information, the size and data type
    const size_t my_size = 10; // size should be a constant, as the array size can't change
    double list[my_size];

    // then we can fill it sorta how we would do with vectors
    for (int i=0; i < my_size; i++) {
        list[i] = sqrt(i);
    }

    // now we could just loop through to print, but lets make a function to do that
    print(list, my_size); // but the function can't know the size of the array before hand, so we need to pass that as well

    // heres something funky about arrays (I've mentioned it before) 
    cout << list[0] << "\n";
    edit(list);
    cout << list[0] << "\n";
    // wait... what just happened? We passed by value into the edit function but the value was changed outside the scope of the function, thats weird
    // what about this?
    double list2[my_size] = {};
    double* a; // this is a pointer to a double, but it is basically the same as a reference
    a = list2; // huh?? we just asigned a reference to a single double the whole list?
    cout << *a << "\n"; // the star in front of the a is "dereferencing" it means get the data stored at the memory location that a specifies. This gives us the first element of the list
    // This is because C++ is not actually keeping track of the whole list. It just stores a pointer to the first element of the list and information about the size. Thats why size_of works here
    cout << sizeof(list) << "\n";
    // but wouldn't work inside the function
    // when we pass the array, even if we try to pass by value, there are no values to pass, so we pass the pointer into the function


    return 0;
}
