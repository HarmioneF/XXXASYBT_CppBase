#include <iostream>

using namespace std;

int main(){
    int x = 7, y = 8;       // 相当于int x, y; x = 7; y = 8;
    int z1 = y - (x++);     // 计算z1 = 1，计算后x=8
    int z2 = y - (++x);     // 计算前x的值自加1，x的值为8，再与y求差
    cout << "z1=" << z1 << endl << "z2=" << z2 << endl;
    return 0;
}
