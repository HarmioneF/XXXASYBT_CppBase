#include <cstdio>

int fac(int x);

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d", fac(m) / (fac(m - n) * fac(n)));
}

int fac(int x) {
    int s = 1;
    for (int i = 1; i <= x; i++)
        s *= i;
    return s;
}
