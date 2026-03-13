#include<iostream>
#include<string>
#include<utility>

using namespace std;

int foo(string& x) {return 1;}
int foo (string&& x) {return 2;}
int foo (const char* x) {return 3;}
int foo (char* x) {x[0] = 'b'; return 4;}
int main () {
    char* p = new char('a');
    cout << foo(p) << " ";
    cout << foo("ljksd") << " ";
    cout << foo(string("abc")) << " ";
    string x = "lksd";
    cout << foo(move(x)) << " ";
    cout << foo(x) << " ";
    delete p;
}
