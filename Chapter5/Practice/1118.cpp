#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int n, x, y, a[10001], b[10001], g[10001], k[10001];
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i] >> b[i] >> g[i] >> k[i];
    // 输入铺设地毯的左下角坐标(a, b)以及地毯在x轴和y轴的方向的长度
    cin >> x >> y;
    for (int i = n; i >= 1; --i)            // 找最上面覆盖的地毯，所以从上往下找
        if (x >= a[i] && x <= a[i] + g[i] && y >= b[i] && y <= b[i] + k[i]) {
            cout << i << endl;
            exit(0);            // 找到覆盖的，输出并结束
        }

    cout << "-1" << endl;
    return 0;
}
