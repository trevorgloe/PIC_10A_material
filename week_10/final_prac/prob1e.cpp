/* In this part, you should assume the user types:
• 11 followed by the enter key;
• Student Awesome followed by the enter key;
• Purple Orange Black followed by the enter key.
You should write down exactly what the console displays including what I said the
the user types into the console
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "What's your favorite number?" << endl;
    int num; cin >> num;
    cout << "What's your full name?" << endl;
    string fullName; getline(cin, fullName);
    cout << "What are your three favorite colors?" << endl;
    string color1, color2, color3;
    cin >> color1; cin.ignore();
    cin >> color2; cin.ignore();
    cin >> color3; cin.ignore();
    cout << "Nice to meet you " << fullName << endl;
    cout << num << " is my favorite too!" << endl;
    cout << color1 << " like the rain!" << endl;
    cout << color2 << " like the fruit!" << endl;
    cout << color3 << " like the metal!" << endl;
    return 0;
}
