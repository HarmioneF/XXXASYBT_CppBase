#include <cstdio>
#include <cstring>

#define MAXN 100 + 10
int a[MAXN];

int main() {
    int n, first = 1;
    scanf("%d", &n);
    memset(a, 0, sizeof(a));
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            if (j % i == 0)
                a[j] = !a[j];
    for (int i = 1; i <= n; ++i)
        if (a[i]) {
            if (first)
                first = 0;
            else
                printf(" ");
            printf("%d", i);
        }
    printf("\n");
    return 0;
}
