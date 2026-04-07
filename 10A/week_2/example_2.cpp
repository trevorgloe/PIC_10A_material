// Predict the output of the following code

# include <iostream>
using namespace std;

int main () {
    char ch = '2';
    int ch_int = static_cast<int>(ch);
    cout << boolalpha << (ch_int == 2) << endl ;
    cout << ( 'B' - 'a' == 'F' - 'e') << endl ;

    return 0;
}
