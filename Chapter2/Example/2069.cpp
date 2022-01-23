#include <cstdio>

using namespace std;

int main() {
    int a, b, c, d, e;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    a /= 3;
    b += a;
    e += a;

    b /= 3;
    a += b;
    c += b;

    c /= 3;
    d += c;
    b += c;

    d /= 3;
    e += d;
    c += d;

    e /= 3;
    d += e;
    a += e;

    printf("%5d%5d%5d%5d%5d\n", a, b, c, d, e);
    return 0;
}
