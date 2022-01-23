#include <cstdio>
#include <cmath>

#define PI 3.14

using namespace std;

int main() {
    int r, h, n = 20 * 1000, v, ans;

    scanf("%d %d", &h, &r);
    v = PI * pow(r, 2) * h;
    ans = n / v + 1;

    printf("%d", ans);
    return 0;
}
