#include <iostream>

using namespace std;

int main() {
    int m;

    cin >> m;           // 输入一个三位数
    int a = m / 100;    // 百位数：直接除以100
    int b = (m / 10) % 10;      // 十位数：先除以10，再求模10
    int c = m % 10;     // 个位数
    int n = c * 100 + b * 10 + a;       // 重新组合对调后的数

    cout << n << endl;        // 输出结果
    return 0;
}
