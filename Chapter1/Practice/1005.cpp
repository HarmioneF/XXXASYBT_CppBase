#include <cstdio>

using namespace std;

int main() {
    int x, y, a, b;
    double ans;
    scanf("%d %d %d %d", &x, &a, &y, &b);
    ans = 1.0 * (y * b - x * a) / (b - a);
    printf("%0.2lf", ans);
    return 0;
}
