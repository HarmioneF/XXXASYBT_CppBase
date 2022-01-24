#include <iostream>

#define M 1000000

using namespace std;

int main() {
    int n, num = 1, sum = 0;    // num：阶乘%M sum：阶乘和%M
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        num = num * i % M;
        sum = (sum + num) % M;
    }
    cout << sum << endl;
    return 0;
}
