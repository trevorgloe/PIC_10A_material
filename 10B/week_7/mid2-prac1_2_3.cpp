/*
Part I: True/False
1. Technically false, because the keyword "this" is an r-value
2. True
3. True
4. True
5. True
6. False (see test below)
*/

/*
Part II: Multiple choice
1. A or B (there may be a typo here); an x value is either casted from an l value (using std::move) or from member access on an r-value to access a member variable
2. B; unless an l-value reference is const, it cannot bind to an r-value. They can bind to const l values if declared const.

*/

int f() {
	return 1;
}

int main() {
	int& a = f();
}
