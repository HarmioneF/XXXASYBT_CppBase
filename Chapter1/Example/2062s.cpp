#include<iostream>

using namespace std;
int main(){
    /* 初始化变量：人数与总价 */
    int x, price;

    /* 获取人数并计算总价 */
    cin >> x;
    price = 10 * x;

    /* 输出人数与总价 */
    cout << x << " " << price << endl;
    return 0;
}
