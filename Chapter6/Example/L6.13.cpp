#include <iostream>

using namespace std;

const int max1 = 51;
int a[max1], n, m;
bool flag;

void sum(int, int);

int main() {
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    cin >> m;
    flag = false;
    sum(n, m);
    flag = false;
    sum(n, m);
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

void sum(int n, int m) {
    if (a[n] == m)                          // 利用全局变量flag传递边界
        flag = true;
    else if (n == 1) return;                // n = 1作为归递边界，不再归递下去
    else {                                  // 进行两种选择
        sum(n - 1, m - a[n]);
        sum(n - 1, m);
    }
}
