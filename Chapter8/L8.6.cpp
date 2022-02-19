/* 传说中的动态数组之一 */
#include <cstdio>

using namespace std;

int n;
int *a;                     // 定义指针变量a，后面当数组名使用

int main() {
    scanf("%d", &n);
    a = new int[n + 1];             // 向操作系统申请了连续的n + 1个int型的空间
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (int i = 2; i <= n; i++)
        a[i] += a[i - 1];
    for (int i = 1; i <= n; i++)
        printf("%d ", a[i]);
    delete []a;
    return 0;
}
