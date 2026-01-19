class C {
private:
	int a;
public:
	C& operator++(){
		a++;
		return *this;
	}
	
	C operator++(int) {
		C copy;
		copy.a = a;
		a++;
		return copy;
	}
};
