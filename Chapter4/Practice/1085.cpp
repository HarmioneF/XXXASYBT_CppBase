#include <iostream>

using namespace std;

int main() {
    double h, sum = 0;
    cin >> h;
    int a = 0;

    while (a < 10) {
        a++;
        sum += h;       // 弹下高度
        h /= 2;
        sum += h;       // 跳起高度
    }

    cout << sum - h << endl << h << endl;       // sum减去一次h才是总长度
    return 0;
}
