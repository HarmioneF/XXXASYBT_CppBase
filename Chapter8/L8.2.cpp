#include <cstdio>

using namespace std;

int a[101], n;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    int *p = &a[1];         // 定义指针变量int p，初始化为数组开始元素的地址，即&a[i];
    for (int i = 1; i <= n; i++) {
        printf("%d", *p);
        /* 移动指针，使p指向下一个数，这里p++的意思是"广义的+1"，不是p的值(地址)+1，
         * 而是根据类型int，增加sizeof(int)，则刚好"跳过"一个整数的空间，达到下一个整数*/
        p++;
    }
    return 0;
}
