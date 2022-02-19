#include <cstdio>

using namespace std;

int main() {
    int a[5], i, *pa = a;                   // 定义整形数组和指针，*pa = a可以在下一行
    for (i = 0; i < 5; i++)                 // 可写成pa + i和&a[i]
        scanf("%d", a + i);
    for (i = 0; i < 5; i++)                 // 指针访问数组，可写成*(pa + i)或pa[i]或a[i]
        printf("a[%d] = %d\n", i, * (a + i));
    return 0;
}
