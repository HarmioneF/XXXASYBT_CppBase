#include <cstdio>

int main() {
    double a, b, r;
    int k;

    scanf("%lf %lf", &a, &b);
    k = int(a / b);
    r = a - k * b;

    printf("%.4lf", r);

    return 0;
}
