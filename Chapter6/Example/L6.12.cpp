/*
 * 二进制最大公约数算法
 * 1.归递终止条件：gcd(n, m)
 * 2.归递关系式：
 *      m < n时：gcd(m, n) = gcd(n, m)
 *      m为偶数，n为奇数：gcd(m, n) = 2 * gcd(m / 2, n / 2)
 *      m为偶数，n为奇数：gcd(m, n) = gcd(m / 2, n)
 *      m为奇数，n为偶数：gcd(m, n) = gcd(m, n / 2)
 *      m为奇数，n为奇数：gcd(m, n) = gcd(n, m - n)
 *
 * 该方法和辗转相除法相比更适合求高精度数的最大公约数，因为只涉及除2和减法操作，而辗转相除法则需要用到高精度除法。
 * */
#include <iostream>
#include <cstdio>

using namespace std;

int gcd(int m, int n) {
    if (m == n)
        return m;
    if (m < n)
        return gcd(n, m);                                   // 归递终止条件
    if (m % 2 == 0) {
        if (n % 2 == 0)                                           // m为偶数，n为偶数
            return 2 * gcd(m / 2, n / 2);
        else                                                      // m为偶数，n为奇数
            return gcd(m / 2, n);
    } else {
        if (n % 2 == 0)                                           // m为奇数，n为偶数
            return gcd(m, n / 2);
        else                                                      // m为奇数，n为奇数
            return gcd(n, m - n);
    }
}

int main() {
    int m, n;
    cin >> m >> n;
    printf("%d\n", gcd(m, n));
    return 0;
}
