#include <iostream>

using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;

    for (int i = 1; i <= n; i++) {
        a %= b;     // 运用除法法则 一步一步除
        a *= 10;    // 不够除，补0再继续
    }
    a /= b;         // n次循环后，a / b的整数部分

    cout << a << endl;

    return 0;
}
