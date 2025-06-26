#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1;
    string s2;
    char c1;
    int i1;
    cin >> s1;
    cin >> s2;
    cout << s1 << "\n";
    cout << s2 << "\n";
    cout << cin.fail() << "\n";
    string s3;
    cin.ignore();
    char c2 = cin.peek();
    getline(cin, s3);
    cout << s3 << "\n";
    char c3 = cin.peek(); // cin >> c3
    string news1;
    string news2;
    getline(cin, news1);
    getline(cin, news2);
    cout << news1 << "\n";
    cout << news2 << "\n";
    return 0;
}
