#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;              // 输入男女生人数
    cout << float(x * 87 + y * 85) / (x + y) << endl;     // 数据类型强制转换，按实数类型输出4位小数
    return 0;
}
