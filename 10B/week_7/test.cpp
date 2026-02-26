
class C {
public:
	// C() = delete;
	C() : p(new int) {};
	C(const C& other) : p(new int) {
		*p = *other.p;
	}

private:
	int* p;
};
int main () {
	int* p = new int(888);
	int* p2 = new int[3]{1};
	C c = C();
}
