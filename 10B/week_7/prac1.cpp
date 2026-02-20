// Is there an issue with the following code?
// If so, what is it?

#include<vector>

using namespace std;

void f(vector<int>& v) {
	return;
}

int main() {
	f(vector<int>(3));
}
