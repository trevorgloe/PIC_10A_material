# Practice Problems for the Final Exam

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

### Answer
Post-fix increment, `x++` will return by value, meaning that the return value is an r-value. A non-const l--value reference, `int& y` cannot be initialized by an r-value, so this code will have a **build error**. 

### Problem 2
```cpp
int* new_array1(int&& k) {
    int p[3];
    p[0] = k;
    p[1] = k + 1;
    p[2] = k + 2;
    return p;
}
int* new_array2(int&& k) {
    int* p = new int[3];
    p[0] = k;
    p[1] = 2 * k;
    p[2] = 3 * k;
    return p;
}
int main() {
    int* p1 = new_array1(4);
    int* p2 = new_array2(5);
    cout << *p1 << " ";
    cout << *p2 << " ";
    delete[] p1;
    delete[] p2;
}
```

### Answer
There are two issues with this code, this first can be seen in the function body of `new_array1`. In the code, a c-style array is created with `int p[3]`. This creates data on *the stack*, but more importantly, it is a local variable to the scope of `new_array1`. This means that by returning a pointer to that data, the function is returning a pointer to a local variable. Once the function's call is over, that local variable may be deallocated and used for something else, so using the pointer from that function call, `p1` will give **undefined behavior**. 

The second issue with the code is that `p1` is a pointer to a stack variable. The end of the code calls `delete` on `p1`. Calling `delete` on a stack variable gives **undefined behavior**. 

### Problem 3
```cpp
class C {
    public:
    int c;
    explicit C(int a) : c(a) {}
    operator double() {return c;}
};
int operator+(C& a, int y) {return a.c + 2*y;}
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
Here there are 3 `operator+` calls being invoked. The first will call `double operator+(C a, double y)` because the overload resolution will pick the cadidate with the least casting. In this case, `x` is already type `C` and `1.0` is already type `double`. The second `+` will also call `double operator+(C a, double y)` for the same reason, no casting needs to happen. 

The third `+` cannot directly call either of the user-defined `operator+`s because the numeric type is first. So the overload resolution must decide on how to implicitly cast the operands in the best way. Because we have the `explicit` keyword in front of `C(int a)`, the compiler cannot create a `C` type from a int implicitly. Thus, the only option is to implicitly convert `C(3)` to a double, which is allowed because we defined the casting operator `double()` (with the `explicit` keyword). 

The final `+` gives us problems. We cannot use `int operator+(C& a, int y)` because `C(1)` is an r-value, and thus cannot bind to the l-value reference in the function signature. So the overload resolution must resort to casting. The two options are to cast `1` to a double and call `double operator(C a, double y)` or to cast `C(1)` to a double and add a double plus an int. 
