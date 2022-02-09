/* 原书例5.11 */
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a[11][11];
    a[1][1] = 1;                            // 设定第一行的值
    for (int i = 2; i <= 10; ++i) {         // 从第二行开始推
        a[i][1] = 1;
        a[i][i] = 1;                        // 设定每一行的首尾值为1
        for (int j = 2; j <= i - 1; ++j)            // 当前行非首尾的数
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];        // 每个数等于上一行的两个数之和
    }
    for (int i = 1; i <= 10; ++i) {
        if (i != 10)
            cout << setw(30 - 3 * 1) << " ";            // 控制每行的起始位置，即空格数量
        for (int j = 1; j <= i; ++j)
            cout << setw(6) << a[i][j];
        cout << endl;
    }
    return 0;
}
