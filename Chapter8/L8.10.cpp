#include <cmath>
#include <cstdio>

using namespace std;

int n, a[10001];            // 判断n是不是素数

bool isprime(int n) {
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    for (int i = 2; i <= sqrt(n); ++i)
        if (n % i == 0)
            return false;
    return true;
}

int *find() {
    for (int i = 1; i <= n; ++i)
        if (isprime(a[i]))
            return &a[i];           // 这句也可以写成: return a + i;
    return NULL;                    // 如果找不到则返回NULL(空指针)
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
        scanf("%d", &a[i]);
    int *p = find();
    if (p != NULL)
        printf("%d\n%d\n", p, *p);             // 输出这个素数的地址和它本身
    else
        printf("Can't find!");
    return 0;
}
