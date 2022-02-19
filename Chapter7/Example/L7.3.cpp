#include <iostream>
#include <algorithm>

using namespace std;

struct node {
    int data{};     // 数值
    int rank{};     // 排名
    int index{};    // 下标
};
node a[10001];
int n;
bool comp1(node x, node y) {
    return x.data < y.data;
}
bool comp2(node x, node y) {
    return x.index < y.index;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i].data, a[i].index = i;
    sort(a + 1, a + 1 + n, comp1);          // 根据值排序，求排名rank
    for (int i = 1; i <= n; i++)
        a[i].rank = i;          // 根据下标排序，回到原数据次序
    sort(a + 1, a + 1 + n, comp2);          // 根据下标排序，回到原数据次序
    for (int i = 1; i <= n; i++)
        cout << a[i].rank << " ";
    return 0;
}
