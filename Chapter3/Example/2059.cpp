#include <iostream>

using namespace std;

int main() {
    int a, b, c, x, y;          // a, b, c分别表示在买笔方案中，6元、5元与4元钱笔的数目

    cin >> x;       // 输入x
    c = x / 4;      // 4元笔买的最多数目
    y = x % 4;      // 求买完c支4元笔后剩余的钱数y
    switch (y) {
        case 0:
            a = 0;
            b = 0;
            break;
        case 1:
            a = 0;
            b = 1;
            c--;
            break;
        case 2:
            a = 1;
            b = 0;
            c--;
            break;
        case 3:
            a = 1;
            b = 1;
            c -= 2;
            break;
    }

    cout << a << " " << b << " " << c << endl;

    return 0;
}
