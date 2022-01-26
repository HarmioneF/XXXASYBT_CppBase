#include <cstdio>

int a[10001], n, x, i, s;

int main() {
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
        scanf("%d", &a[i]);
    scanf("%d", &x);
    for (int i = 0; i < n; ++i) {
        if (a[i] == x) {
            s = i;
            break;
        }
    }
    if (s == 0) {
        printf("-1");
        return 0;
    }
    printf("%d\n", s);
    return 0;
}
