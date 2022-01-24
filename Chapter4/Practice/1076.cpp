#include <iostream>

using namespace std;

/* 如正常次数为1，则最长1个小时。若连续 两次正常，则最长2个小时 */

int main() {
    int n;
    cin >> n;
    int p1, p2;
    int num = 0;        //记录连续正常的次数
    int sum = 0;        //记录总共正常的次数，也就是最长血压正常小时数

    for (int i = 1; i <= n; ++i) {
        cin >> p1 >> p2;

        if ((p1 >= 90 && p1 <= 140) && (p2 >= 60 && p2 <= 90)) {
            num++;
        } else {
            /* 不满足，说明两次正常血压的测量时间不连续，将连续正常血压次数归零 */
            num = 0;
        }

        if (num > sum) {
            /* 满足，说明有连续正常血压，直接赋给sum即可 */
            sum = num;
        }
    }

    cout << sum;
    return 0;
}
