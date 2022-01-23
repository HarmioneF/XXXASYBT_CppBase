#include<iostream>      // 使用cin,cout，需调用iostream库
/* #include<cstdio> */     // 使用printf和scanf，需调用cstdio库
using namespace std;

int main() {
    int x, y;       // 定义整型变量
    cin >> x;       // 若调用的是cstdio库，可使用scanf("%d", &x);
    y = 10 * x;     // 计算总票价
    cout << x << " " << y << endl;      // 若调用的是cstdio库，可使用printf("%d %d\n", x, y);注意%d %d之间空格
    return 0;       // 结束程序
}
