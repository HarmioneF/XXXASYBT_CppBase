#include<cstdio>
#include <cmath>

int main() {
    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);          // 输入三角形的三边
    float p = (a + b + c) / 2;          // 求出p的值
    float s = sqrt(p * (p - a) * (p - b) * (p - c));        // 根据p求面积，sqrt是开平方函数

    printf("%0.3f\n", s);       // 输出面积，0.3f按实际位数输出，保留3位小数

    return 0;
}
