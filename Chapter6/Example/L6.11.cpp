#include <iostream>
#include <cstdio>

using namespace std;

int fac(int n) {
    return n == 0 ? 1 : n * fac(n - 1);
}

int main() {
    int x;
    cin >> x;
    printf("%d! = %d", x, fac(x));
    return 0;
}
