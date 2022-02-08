#include <iostream>

using namespace std;

int a[20001], b[5001], n, i;            // b数组标记属否重复

int main() {
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    for (i = 1; i <= n; ++i)
        if (!b[a[i]]) {
            b[a[i]] = 1;
            cout << a[i] << " ";         // 若a[i]第一次出现，则输出，并标记为已输出
        }
    return 0;
}
