/*
Problem 2:
a) Results in a memory leak because b is a pointer to a place on the heap allocated with the new keyword, but then b is nulled out, so we have lost that memory location and it never gets deleted.
b) Does not result in a memory leak because v is deleted so the space created with new is freed up and we are good.
c) Very much results in a memory leak beacuse each iteration of the loop, p is set to a new pointer and we lose the location of the data that p used to point to. When we call delete on p later, we can only delete the data at p once so this would give us undefined behavior
d) Results in a memory leak because the copy asignment operator does not free up the memory for the asigned-to object. data is just set to a new pointer and the previous space that it pointed to is not freed.
*/

/*
Problem 4:
- 3+5 is a pr value
- i is an l value
- "Hello" is an l value
- { 1.1, 2.2} is a pr value
- v is an l value
- v[1] is an l value
- 4 is a pr value
- v[0] < v[1] is a pr value
- 100 is a pr value
- 9.8 is a pr value
- g is an l value
- pg is an l value
- &g is an r value
- "Midterm" is an l value
- name is an l value
- s is an l value
- std::move(name) is an x value
- "2" is an l value
- string("PIC 10B") is an r value
- string("PIC 10B").substr(4) is an r value
- vector<int>(3) is an r value
- vector<int>(3).size() is an r value
*/

#include<vector>

using namespace std;

void f(vector<int>& v) {
	return;
}

int main() {
	f(vector<int>(3));
}
