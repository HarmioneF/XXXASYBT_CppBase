#include <iostream>

using namespace std;

bool a[101];

int main() {
    int n, m;
    cin >> n >> m;                              // 共n人，数到m出圈
    memset(a, 0, sizeof(a));
    int f = 0, t = 0, s = 0;
    do {
        ++t;                                    // 逐个枚举圈中的所有位置
        if (t == n + 1)                         // 数组模拟环状，最后一个与第一个相连
            t = 1;
        if (!a[t])                              // 第t个位置上有人则报数
            ++s;
        if (s == m) {                           // 当前报的数是m
            s = 0;                              // 计数器清零
            cout << t << " ";
            a[t] = true;                        // 此处的人已出圈，设置为0
            ++f;                                // 出圈的人数增加一个
        }
    } while (f != n);                           // 直到所有的人都出圈为止

    return 0;
}
