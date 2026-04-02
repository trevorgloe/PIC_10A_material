void f(int&& a) {
    a++;
}

int main() {
    int&& r = 1;
    f(r);
    return 0;
}

