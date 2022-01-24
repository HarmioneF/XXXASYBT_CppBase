#include <iostream>

#define SR 300

using namespace std;

int main() {
    int cost, sum = 0, gm = 0;          // 开支，存储，给妈妈的钱

    for (int i = 1; i <= 12; i++) {
        cin >> cost;
        sum -= cost - SR;
        if (sum < 0) {
            cout << "-" << i << endl;
            return 0;
        } else {
            gm += sum / 100, sum %= 100;
        }
    }

    cout << 120 * gm + sum << endl;
    return 0;
}
