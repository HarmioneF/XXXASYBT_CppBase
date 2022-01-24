/*
 * 将任意的n分解为质因数的成绩，要从最小的质数开始，那么，我们就不妨从2开始试除，能整除就输出2，
 * 直到不再含有因子2；然后用下一个质数反复试除，……，再用下一个质数试除，……，一直到商为1，停止操作。
 * */
#include <iostream>

using namespace std;

int main() {
    int n, i = 2;
    cin >> n;
    cout << n << "=";
    do {
        while (n % i == 0) {         // n能被i整除，就重复做除法操作
            cout << i;
            n /= i;
            if (n != 1)
                cout << "*";
        }
        i++;
    } while (n != 1);           // n没有除尽，就重复操作

    return 0;
}
