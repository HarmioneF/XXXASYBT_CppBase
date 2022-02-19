#include <iostream>
#include <cstdio>

using namespace std;

int xn(int);

int x;

int main() {
    int n;
    cin >> x >> n;
    printf("%d ^ %d = %d", x, n, xn(n));
    return 0;
}

int xn(int n) {
    if (n == 0)                 // 归递边界
        return 1;
    else
        return x * xn(n - 1);       // 归递式
}
