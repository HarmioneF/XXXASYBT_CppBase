#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n, m, a[6][6], t, i, j;
    for (i = 1; i <= 5; ++i)
        for (j = 1; j <= 5; ++j)
            scanf("%d", &a[i][j]);
    scanf("%d %d", &m, &n);
    for (i = 1; i <= 5; ++i)
        swap(a[m][i], a[n][i]);
    for (i = 1; i <= 5; ++i) {
        for (j = 1; j <= 5; ++j)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
