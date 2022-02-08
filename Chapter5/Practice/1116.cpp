#include <iostream>
#include <cstdio>

using namespace std;
int n, sum = 1, a[400001], maxn;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);

    int temp = a[1];
    for (int i = 2; i <= n; i++)
        if (a[i] == temp)
            sum++;
        else {
            maxn = max(maxn, sum);
            sum = 1;
            temp = a[i + 1];
        }
    maxn = max(maxn, sum);

    printf("%d", maxn);
    return 0;
}
