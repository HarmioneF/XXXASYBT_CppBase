#include <iostream>

using namespace std;

int x, y;

int gcd(int x, int y) {         // 求最大公约数，形参x, y是局部变量
    int r = x % y;              // r是局部变量，局部变量x, y屏蔽全局变量
    while (r != 0) {
        x = y;
        y = r;
        r = x % y;
    }
    return y;
}

int lcm() {
    return x * y / gcd(x, y);       // 这里x, y是全局变量
}

int main() {
    cin >> x >> y;
    cout << lcm() << endl;          // 这里的x, y是全局变量
    return 0;
}
