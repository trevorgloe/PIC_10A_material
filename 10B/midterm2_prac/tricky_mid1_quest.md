## Tricky question from midterm 1
On midterm 1, the following question was asked.

Write down the output produced by the following code. Box your answer.
Recall that `string(size_t n, char c)` constructs a string consisting of n repetitions
of the character `c`.

```cpp
string f(string& s, size_t i) {
    if (i >= s.size()) { return "empty"; }
    if (i == s.size() - 1) { return string(1, s[i]); }
    return f(s, i + 1) + string(1, s[i]++);
}

int main() {
    string s = "Recursion";
    cout << f(s, 0) << endl;
    cout << f(s, 7) << endl;
    cout << f(s, 10) << endl;
    return 0;
}
```

To answer this question, we need to very carefully keep track of what string we have in memory as the program runs, and be careful about exactly what `s[i]++` is doing. 

To begin, we have a string `s`, with the data `"Recursion"`. Then we call `f(s, 0)`. The recursive call stack will then proceed in the following way

1. `f("Recursion", 0)` returning `f("Recursion", 1) + "R"`
2. `f("Recursion", 1)` returning `f("Recursion", 2) + "e"`
3. `f("Recursion", 2)` returning `f("Recursion", 3) + "c"`
4. `f("Recursion", 3)` returning `f("Recursion", 4) + "u"`
5. `f("Recursion", 4)` returning `f("Recursion", 5) + "r"`
6. `f("Recursion", 5)` returning `f("Recursion", 6) + "s"`
7. `f("Recursion", 6)` returning `f("Recursion", 7) + "i"`
8. `f("Recursion", 7)` returning `f("Recursion", 8) + "o"`
9. `f("Recursion", 8)` returning `"n"`

The return on 9 happens because for `i=8`, we fall to the condition that `i==s.size() - 1`. With this, we can get the correct answer for `cout << f(s,0) << endl;` to be 
```
noisruceR
```
So it prints the string backwards. The trick part comes in when we now have to consider the second line, `cout << f(s, 7) << endl;`. Note that in each step of the recursive stack (except the last one), we call `s[i]++` and take the return value. The post-fix `++` will add 1 to the argument (in this place bump the letter up to the next letter in the alphabet) and then return, by value, the *unupdated* value. So on the first function call we call `s[0]++`, which will return `R`, as we have above. But it *also* has the side effect that, once the function call is over, `s[0]` has been incremented by 1. This effect persists, because we are always passing the string by reference. 

So after each of the recursive calls above (except 9), one of the letters is incremented. We can track what the string looks like after each call like so:

1. `"Secursion"`
2. `"Sfcursion"`
3. `"Sfdursion"`
4. `"Sfdvrsion"`
5. `"Sfdvssion"`
6. `"Sfdvstion"`
7. `"Sfdvstjon"`
8. `"Sfdvstjpn"`
9. `"Sfdvstjpn"` (Note that the string doesn't change after this call, because `s[i]++` was not called)

Then, when the second line `cout << f(s, 7)` is called, it will simlarly print the last 2 characters, in reverse order, so we get the output
```
np
```

