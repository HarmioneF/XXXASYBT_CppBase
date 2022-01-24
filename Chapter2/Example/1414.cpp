#include <iostream>

using namespace std;

int main() {
    int A, B, C, ans;           // 定义变量
    cin >> A >> B >> C;         // 输入A, B, C成绩
    ans = (int)(A * 0.2 + B * 0.3 + C * 0.5);       // 强制类型转换，不加int自动转换
    cout << ans << endl;        // 输出总成绩
    return 0;
}
