#include<cstdio>    // printf和scanf调用cstdio库，在C语言中可调用stdio.h库

using namespace std;

int main() {    // 整个程序开始
    float s, h, up, down;        // float定义s, h, up, down为单精度实现变量
    up = 15;        // 输入上底，或使用scanf("%f", &up);
    down = 25;      // 输入下底，或使用scanf("%f", &down);
    h = 2 * 150 / up;       // 根据上底求出梯形的高
    s = (up + down) * h / 2;        // 求出梯形的面积
    printf("s=%0.2f\n", s);     // \n是换行控制符，0.2f按实际位数输出，保留2位小数
    return 0;       // 结束程序，在TC++和VC++中也要保留
}
