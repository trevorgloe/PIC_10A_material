// a header file to declare my functions

// what the hell is this thing? That is very very complicated...
#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP
// When you build the program, a lot od different things happen (see picture):
// 1. Preprocessor step
// 2. Compilation of cpp files
// 3. Linking
// This is a drastic oversimplification, but for now that is the main thing needed to be understood
// the stuff that starts with # is called a "pre-processor directive" which means you are telling the preprocessor to do something before we start compiling the code
// you've already seen one with #include - this tells to preprocessor "hey, everything in this other file, I want you to just throw it onto the bottom of the current file before we compile"
// So that means when you do the #include the preprocessor makes it so all the functions will end up at the bottom of the code (as you would want)
// This preprocessor directive is called and "include guard" and it is saying "hey don't throw this file onto the bottom if its already been included"
// So it prevents 2 copies of the same file from being thrown together

#include <iostream>
#include <string>

void pop_two(std::string& s);

int first_a(std::string s);


#endif
