/* *格式符的作用 */
#include <cstdio>

int main() {
    int a, b;
    // *表示输入量不附给一个变量
    scanf("%8d *d %d", &a, &b);
    printf("a=%d, b=%d\n", a, b);
    return 0;
}
