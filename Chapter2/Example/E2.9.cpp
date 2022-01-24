#include <iostream>

using namespace std;

int main() {
    char c = 'B';           // 定义字符变量c并赋值
    putchar(c);         // 输出该字符
    putchar('\x42');    // 用转义字符输出字母'B'
    putchar(0x42);    // 用16进制输出字母'B'
    putchar(66);       // 用16进制输出字母'B'
    return 0;
}
