# Final Exam Practice Problems

## Identifying Errors
There are one to two problems (build errors or undefined behavior) in each of
the following code snippets. Identify the problem and give an explanation for
what is causing the problem.

### Problem 1
```cpp
int main () {
    int x = 4;
    int& y = x++;
    int& z = ++x;
}
```

### Problem 2
```cpp
int* new_array1(int&& k) {
    int p[3];
    p[0] = k;
    p[1] = k + 1;
    p[2] = k + 2;
    return p ;
}
int* new_array2(int&& k) {
    int* p = new int[3];
    p[0] = k;
    p[1] = 2 * k;
    p[2] = 3 * k;
    return p;
}
int main () {
    int* p1 = new_array1(4);
    int* p2 = new_array2(5);
    cout << *p1 << " ";
    cout << *p2 << " ";
    delete[] p1 ;
    delete[] p2 ;
}
```

### Problem 3
```cpp
class C {
public:
    int c;
    explicit C(int a) : c(a) {}
    operator double() {return c;}
};
int operator+(C &a, int y) {return a.c + 2*y;}
double operator+(C a, double y) {return a.c + 3*y;}
int main () {
    C x(2);
    x.c = 3;
    cout << x + 1.0 << endl;
    cout << C(3) + 2.0 << endl;
    cout << 2.0 + C(3) << endl;
    cout << C(1) + 1 << endl;
}
```

### Problem 4
```cpp
const int& sq(int a) {
    return a*a;
}
int main() {
    int x = 4;
    const int& x_squared = sq(4);
    const int& x_to_the_4th = sq(sq(4));
    int x_cubed = x * sq(x);
    cout << x_squared << endl;
    cout << x_cubed << endl;
    cout << x_to_the_4th << endl;
}
```

## Predicting Output
Each of the following examples builds without undefined behavior. Predict the
output in each of the following code examples.

### Problem 1
```cpp
class D {
public :
    int c;
    D(int _c) : c(_c) {cout << "c1 ";}
    D (const D& other) : c(other.c) {cout << "c2 ";}
    D (D&& other) : c(other.c) {cout << "c3 ";}
    ~D() {cout << "d ";}
    int* foo() {
        cout << "p1 ";
        return new int(c);
    }
    D operator+(D other){
        cout << "+ " ;
        return c+other.c;
    }
};
int main () {
    D x(3);
    D y(x);
    x + 3;
    D z(move(x));
    int *p = y.foo();
    y.c = 4;
    cout << *p << " " << y.c << " ";
    delete p;
}
```

### Problem 2
```cpp
int foo(string& x) {return 1;}
int foo (string&& x) {return 2;}
int foo (const char* x) {return 3;}
int foo (char* x) {x[0] = ’b’; return 4;}
int main () {
    char* p = new char(’a’);
    cout << foo(p) << " ";
    cout << foo("ljksd") << " ";
    cout << foo(string("abc")) << " ";
    string x = "lksd";
    cout << foo(move(x)) << " ";
    cout << foo(x) << " ";
    delete p;
}
```

### Problem 3
```cpp
class vec3 {
public:
    int* p;
    vec3(int x, int y, int z) : p(new int[3]) {
        p[0] = x; p[1] = y; p[2] = z;
    }
    void print() {
        if (p == nullptr) {
            cout << "This vector’s data has been deleted." << endl;
        } else {
            cout << "[" << p[0] << ", " << p[1] << ", " << p[2] << "]" << endl;
        }
    }
    vec3 (vec3& other) : p(other.p)
    {
        other.p = nullptr;
    }
    vec3(vec3&& other) : p(new int[3]) {
        p[0] = other.p[0];
        p[1] = other.p[1];
        p[2] = other.p[2];
    }
    ~vec3() {delete[] p;}
};

int main() {
    cout << boolalpha;
    vec3 v(1 , 2 , 2);
    int* v_p = v.p;
    vec3 w(v);
    v.print();
    w.print();
    cout << (v_p == v.p) << " " << (w.p == v.p) << " " << (v_p == w.p) << endl;
    vec3&& ref = vec3(1 , 1 , 1);
    int* r_p = ref.p;
    vec3 r(move(ref));
    ref.print();
    r.print();
    cout << (r.p == ref.p) << " " << (r.p == r_p) << " " << (r_p == ref.p) << endl;
}
```
