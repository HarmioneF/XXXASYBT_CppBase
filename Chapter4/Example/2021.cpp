/*
 * 求两个整数的最大公约数可以采用辗转相除法（欧几里得算法）。对于任意两个自然数m和n，用m，n，r分别表示被除数、除数、余数，那么m和n的最大公约数等于
 * n和r的最大公约数。
 * */

#include <iostream>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int r = m %= n;

    while (r) {
        m = n;
        n = r;
        r = m % n;
    }

    cout << n << endl;
    return 0;
}
