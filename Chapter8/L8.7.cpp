#include <cstdio>

using namespace std;

const int LP = 100001;
int n, m, k;
int x[LP], y[LP], d[LP];
int c[LP];              // 每列的数据的个数
int *a[LP];

/*
 * 每列一个指针，准备申请"数组"。
 * 这里定义了固定大小为LP的一个指针数组，
 * 占用空间大小为5 * 4 * LP字节，约2M。
 * 还可以在输入n，m后，在申请"动态数组"，
 * 当n，m比较小时，占用更小的空间。
 * a[i]表示第i列的指针。
 * */

int main() {
    scanf("%d%d%d", &n, &m, &k);
    for (int i = 1; i <= k; i++) {
        // x[i]和y[i]是第i个数据所在行号和列号
        scanf("%d%d%d", &x[i], &y[i], &d[i]);
        c[y[i]]++;      // 统计c属猪中每列的数据的个数
    }
    for (int i = 1; i <= m; i++)
        a[i] = new int[c[i]];
    for (int i = 1; i <= k; i++) {
        // 收集k个数据到相应的列中
        *a[y[i]] = d[i];
        /*
         * 数据放在相应列的数组中
         * *a[y[i]] = d[i];也可以写成a[y[i]][0] = d[i];
         * */
        a[y[i]]++;      // 数组指针移动到下一个位置
    }
    for (int i = 1; i <= m; i++) {      // 列优先
        a[i] -= c[i];           // 指针回到每列的前面
        for (int j = 1; j <= c[i]; j++, a[i]++)
            printf("%d", *a[i]);
    }

    return 0;
}
