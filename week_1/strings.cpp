// file to get used to strings and chars

#include <iostream>
#include <string>

int main() {
    // the char variable is a single letter, which is native to c++
    char c = 'c';
    std::cout << c << "\n";

    // heres something interesting
    char a = 71;
    std::cout << a << "\n";
    // whats going on here? well this is because c++ stores chars are just numbers
    // it translates a number to a character using the ASCII table (show table)
    // thats why we can do some weird stuff like
    c++;
    std::cout << c << "\n";

    // strings are full words (just arrays of chars), but are not native to c++
    // we have to import the string library to use them
    std::string s = "Burger";
    std::cout << s << "\n";
    
    // because strings are just a bunch of chars together, we can access the 
    // individual chars via the .at function
    std::cout << s.at(3) << "\n";
    // we technically can also access the elements of a string via [3] such as 
    std::cout << s[3] << "\n";
    // WARNING: you should be VERY careful using this function because .at(1000) will error because you are trying to access elements of the string that don't exist but [100] will not and you will actually just start pulling data from some other unknown place in memory
    //
    // certain languages (such as Rust) market themselves as "memory safe" which basically means they have protections in place to protect against this exact thing
    // We can concatenate strings (join them together sequentially) using the + operator
    // common mistake (concatentating string literals)
    std::string first = "John";
    std::string last = "Cena";
    std::string full = first+ " " + last;
    std::cout << full << "\n";
    // what about this?
    // std::string new_name = "Adam" + " Ondra"; // so this will not work because both the initial strings are "string literals"
    //
    // finally, I'll just mention how to get input from the console
    // This is done with the cin function and we can pull a string from the user
    std::string input; // declare a string
    std::cin >> input; // get the input from the user
    std::cout << input << "\n";
    // but if we have two words separated by a space, it actually just takes the first one
    // this can be alleviated by using two variables
    std::string first_word;
    std::string second_word;
    std::cin >> first_word >> second_word;
    std::cout << first_word << " " << second_word << "\n";


    return 0;
}
