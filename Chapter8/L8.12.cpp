#include <iostream>

using namespace std;

int sum(int a, int b) {
    return a + b;
}

typedef int (*LP)(int, int);            // 定义了一个函数指针变量类型LP

int main() {
    LP p = sum;             // 定义了一个LP类型的函数指针LP，并赋值为sum
    cout << p(2, 5);        // 使用p来调用函数，实参为2和5，调用sum函数，输出返回值7
    return 0;
}
