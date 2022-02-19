#include <cstdio>

using namespace std;

int a = 10;
int *p;
int **pp;

int main() {
    p = &a;         // 将p指向a
    pp = &p;        // 将pp指向p
    printf("%d = %d = %d\n", a, *p, **pp);          // **pp通过2次简介访问了a的变量的值10
    return 0;
}
