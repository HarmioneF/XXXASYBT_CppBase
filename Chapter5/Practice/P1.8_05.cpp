#include <iostream>
#include <cstdio>

using namespace std;
int a[6][6];

int main() {
    int i, j, x = 0, y, z;
    bool q;
    for (i = 1; i <= 5; ++i)
        for (j = 1; j <= 5; ++j)
            scanf("%d", &a[i][j]);
    for (i = 1; i <= 5; ++i) {
        q = true;
        x = 0;
        for (j = 1; j <= 5; ++j)
            if (a[i][j] > x) {
                // 寻找每一行的最大数，记录位置
                x = a[i][j];
                y = j;
                z = i;
            }
        for (j = 1; j <= 5; ++j)
            if (a[j][y] < x)
                q = false;          // 判断该行最大数是否为该列最小数，若不是则q为false
        if (q) {
            printf("%d %d %d", z, y, x);
            return 0;
        }
    }

    cout << "not found";
    return 0;
}
