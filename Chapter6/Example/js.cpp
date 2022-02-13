#include <iostream>

using namespace std;

int js(int);                // 函数声明

int main() {
    int sum = 0;
    for (int i = 1; i <= 10; ++i)
        sum += js(i);           // 调用函数
    cout << "Sum = " << sum << endl;
    return 0;
}

int js(int n) {                 // 定义函数
    int s = 1;
    for (int i = 1; i <= n; ++i)
        s *= i;
    return s;               // 函数返回值
}
