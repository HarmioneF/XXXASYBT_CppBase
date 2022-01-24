#include <iostream>

using namespace std;

int main() {
    int a1, a2, n;

    cin >> a1 >> a2 >> n;
    int gc = a2 - a1;           // 公差
    int xz = a1 + (n - 1) * gc;         // 等差数列求项值：首项 + (项数 - 1) * 公差

    cout << xz << endl;

    return 0;
}
