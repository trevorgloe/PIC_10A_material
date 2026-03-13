class Outer {
private:
	class Nested {
	private:
		int i;
	public:
		Nested() : i(1) {};
	};

public:
	int get_nested(Nested n) {
		return n.i;
	}
};

int main() {
	Outer O;
	Outer::Nested N;
	return 0;
}
