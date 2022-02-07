#include <iostream>

using namespace std;
int a[10001], n, i, k = 1, maxn = 0;

int main() {
    cin >> n;
    a[0] = -34567;              // a[0]不能和a[1]相等
    for (i = 1; i <= n; ++i) {
        cin >> a[i];
        if (a[i] == a[i - 1])       // 和前一个相等，则平台长度加一
            ++k;
        else                        // 不相等， 开始计算下一个平台
            k = 1;
        if (k > maxn)               // 找最长平台
            maxn = k;
    }

    cout << maxn << endl;
    return 0;
}
