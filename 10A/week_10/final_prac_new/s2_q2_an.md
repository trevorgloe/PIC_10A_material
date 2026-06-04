There is a build error on line 14, due to the calls `div_by_2(f)`. The private member function `div_by_2(int& i)` is meant to build an `int` reference to the argument. The argument passed on line 14 is a `float`, and a regular `int` reference cannot bind to a `float`. Note however, that a `const int&` could indeed bind to the float. So if the signature for `div_by_2` looked like
```cpp
float div_by_2(const int& i)
```
The code would not have a build error.
