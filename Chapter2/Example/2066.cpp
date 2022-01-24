#include <cstdio>       // 使用printf和scanf，需调用cstdio库
#include <iostream>     // 使用cout和cin，需调用iostream库

using namespace std;

int main(){
    double n = 0, m = 0, c = 0, d = 0;      // 定义并初始化double变量
    cin >> n >> m;          // 小明有n元，书原价m元
    c = m * 0.8;            // 书价8折就是*0.8
    d = n - c;              // 小明n元减买书的费用就是剩下的费用
    printf("%0.2lf", d);            // 保留两位小数，注意double用lf, float用f
    return 0;               // 结束程序
}
